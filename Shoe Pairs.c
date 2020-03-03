#include<stdio.h>
int main()
{
    int n,i,j,cnt=0;
    scanf("%d",&n);
    int ara[n],ara2[n];
    scanf("%d",&ara[0]);
    scanf("%c",&ara2[0]);
    for(i=1;i<n;i++){
        scanf("%d ",&ara[i]);
        scanf("%c ",&ara2[i]);
    }
    for(i=0;i<n;i++){
        if(ara[i]!=0){
            for(j=0;j<n;j++){
                if(i!=j){
                    if(ara[i]==ara[j] && ara2[i]!=ara2[j]){
                        ara[i]=0;
                        ara[j]=0;
                        cnt++;
                    }
               }
          }
        }
    }
     printf("%d\n",cnt);
    return 0;
}
