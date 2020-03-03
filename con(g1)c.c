#include<stdio.h>
int main()
{
    int n,k,cnt;
    cnt=0;
    scanf("%d %d",&n,&k);
    while(k<n){
        cnt=n/k;

    }
    if(cnt==0){
        cnt=-1;
        printf("%d\n",cnt);
    }
    else{
            printf("%d\n",cnt+1);
    }
    return 0;
}
