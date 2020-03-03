#include<stdio.h>
int fun(int n)
{
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n,i,j,sum,l;
    printf("PERFECTION OUTPUT\n");
    while(1){
            sum=0;
            j=1;
            scanf("%d",&n);
            if(n==0){
                printf("END OF OUTPUT\n");
                break;
            }
            int ara[n];
            ara[0]=1;
            for(i=2;i<=n;i++){
                if(n%i==0){
                    ara[j]=i;
                    j++;
                }
            }
            for(i=0;i<j-1;i++){
                sum=ara[i]+sum;
            }
            l=fun(n);
            l=5-l;
            for(i=0;i<l;i++){
                printf(" ");
            }
            if(sum==n){
                printf("%d PERFECT\n",n);
            }
            if(sum<n){
                printf("%d DEFICIENT\n",n);
            }
            if(sum>n){
                printf("%d ABUNDANT\n",n);
            }

    }
    return 0;
}
