#include<stdio.h>
int main()
{
    int n,a,b,k,i,j,r,cas=0;
    scanf("%d",&k);
    while(k--){
            a=1,b=1;
        scanf("%d %d",&n,&r);
        for(i=n,j=1;i>=r;i--,j++){
            a=i*a;
            if(j<=r){
              b=b*j;
            }
            if(a%b==0){
                a=a/b;
                b=1;
            }
        }
        printf("Case %d: %d\n",++cas,a);
    }
}
