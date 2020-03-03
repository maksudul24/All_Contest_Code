#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int dem(char ara[])
{

    int i,n,add=0;
    double x,y;
    x=strlen(ara);
    n=x;
    x=x-1;
    for(i=0;i<n;i++){
        if(ara[i]=='1'){
            add+=pow(2,x);
        }
        x--;
    }
    return add;
}


int main()
{
    int ara[1000],i,j=0,k=0,n1,n2,sw=0,x,F,R,w=0,v=0;
    char linea[1000],lineb[1000],cona[100][1000],conb[100][1000];
    scanf("%d",&R);
    for(F=1;F<=R;F++){
            k=0,j=0,sw=0,k=0;
            scanf(" %s",linea);
            scanf(" %s",lineb);
            n1=strlen(linea);
            n2=strlen(lineb);
            for(i=0;i<n1+1;i++){
                if(linea[i]!='.' && i!=n1){
                    cona[v][j]=linea[i];
                    j++;
                }
                else{
                    ara[k]=atoi(cona[v]);

                    j=0;
                    k++;
                    v++;
                }
            }
            k=0;
            j=0;
            for(i=0;i<n2+1;i++){
                if(lineb[i]!='.' && i!=n2){
                    conb[w][j]=lineb[i];
                    j++;
                }
                else{

                    x=dem(conb[w]);
                    if(x!=ara[k]){
                        sw=1;
                        break;
                    }
                    sw=3;
                    k++;
                    w++;
                    j=0;
                }

            }
            if(sw==3){
                printf("Case %d: YES\n",F);
            }
            else if(sw==1){
                printf("Case %d: NO\n",F);
            }
    }
    return 0;
}
