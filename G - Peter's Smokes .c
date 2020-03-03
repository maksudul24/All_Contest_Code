#include<stdio.h>
int main()
{
    int n,k,total_sigar=0;
    scanf("%d %d",&n,&k);
    if(n>=k){
            while(1){
                total_sigar=n+total_sigar;
                n=n/k;
                if(n==0){
                    break;
                }
            }
    }
    else{
        total_sigar=n;
    }
    printf("%d\n",total_sigar);
    return 0;
}
