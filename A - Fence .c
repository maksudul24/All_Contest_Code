#include<stdio.h>
int main()
{
    int n,k,ara[110],i,j,ans=0,min=200,x;
    scanf("%d %d",&n,&k);
    k--;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(i>=k){
                j=i;
                x=i-k;
            for(;j>=x;j--){
                ans+=ara[j];
            }
            if(ans<min){
                min=ans;
            }
            ans=0;
        }
    }
    printf("%d\n",min);
    return 0;
}
