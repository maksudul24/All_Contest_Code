#include<stdio.h>
#include<math.h>

int ara[1000];
int lang=0,ln=0,pos,sw=0,s2=1;

void binary(int n)
{
    if(n==0){
        return;
    }
    if(n%2==1){
      ara[lang]=1;
      if(sw!=2){
        sw=1;
      }
      ln++;
    }
    else{
        ara[lang]=0;
        if(sw==1){
            pos=lang;
            sw=2;
        }
    }
    lang++;
    binary(n/2);
    printf("%d",n%2);
}

int main()
{
    int x,i,temp,add=0,j,k;
            scanf("%d",&x);
            binary(x);
            if(sw==2){
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
            printf("\n%d\n",add);
    return 0;
}



