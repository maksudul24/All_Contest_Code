#include<stdio.h>
int main()
{
    int i,n,k,sum,t,m,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0;
        scanf("%d %d",&m,&n);
        for(j=1;j<=m;j++){
            t=1;
            k=2*n;
        if(t>0 & t<n+1){
            sum=sum-j;
            t++;
        }
        else{
            sum=sum+j;
            if(t==k){
                t=1;
            }
        }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

