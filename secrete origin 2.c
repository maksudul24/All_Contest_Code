#include<stdio.h>
#include<math.h>

int ara[1000];
int lang=0,ln=0,pos,sw=0,sw2=0,ln2=0,en;

void binary(int n)
{
    if(n==0){
        return;
    }
    if(n%2==1){
      ara[lang]=1;
      if(sw!=2) sw=1;

      if(sw2==1 || sw2==2){
            ln2++;
            sw2=2;
      }
      ln++;
    }
    else{
        ara[lang]=0;

        if(lang==0){
            sw2=1;
        }
        if(sw2==2){
            en=lang+1;
            sw2=3;

        }
        if(sw==1){
            pos=lang;
            sw=2;
        }
    }
    lang++;
    binary(n/2);
  //  printf("%d",n%2);
}

int main()
{
    int x,i,temp,add=0,j,k;
    scanf("%d",&k);
    for(j=1;j<=k;j++){
                scanf("%d",&x);
                lang=0,ln=0,sw=0,sw2=0,ln2=0,add=0;
                binary(x);
                if(sw2==3 && ln2>1){
                        for(i=lang-1;i>=en;i--){
                            if(ara[i]==1) add+=pow(2,i);
                        }
                    //    printf("\n%d %d %d\n",lang,en,ln2);
                        add+=pow(2,en-1);
                        ln2--;
                        for(i=0;i<ln2;i++){
                                add+=pow(2,i);
                        }
                }
                else if(sw==2){
                    temp=ara[pos];
                    ara[pos]=ara[pos-1];
                    ara[pos-1]=temp;
                    for(i=0;i<lang;i++){
                        if(ara[i]==1) add+=pow(2,i);
                    }
                }
                else{
                    add=pow(2,lang);
                    ln--;
                    for(i=0;i<ln;i++){
                        add+=pow(2,i);
                    }
                }
                printf("Case %d: %d\n",j,add);
    }
    return 0;
}



