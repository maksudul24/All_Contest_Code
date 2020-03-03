#include<stdio.h>
int main()
{
    int n,k,ans2,ans,m;
    scanf("%d %d",&n,&k);
    if(n!=k && k!=0){
        ans2=1;
        m=n-k;
        if(m-k<=0) ans=m;
        else ans=k+1;
    }
    else{
        ans2=0;
        ans=0;
    }
    printf("%d %d\n",ans2,ans);
    return 0;

}
