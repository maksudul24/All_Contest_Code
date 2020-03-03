#include<stdio.h>
int main()
{
    int n,k,t;
    scanf("%d %d %d",&n,&k,&t);
    if(t<=n){
       if(t>=k){
            printf("%d\n",k);
            return 0;
        }
        else{
           printf("%d\n",t);
           return 0;
        }

    }
    else{
        n=t-n;
        k=k-n;
        printf("%d\n",k);
    }
    return 0;
}
