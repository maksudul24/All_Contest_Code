#include<stdio.h>
int main()
{
    int n,j,i,ara[100],k,a,b=0;
    k=-1;
    j=0;
    scanf("%d %d",&n,&a);
    for(i=1;i<=n;i++){
        if(n%i==0){
            ara[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++){
        if(ara[i]==a){
            printf("%d %d\n",n,i+1);
            b++;
            break;
        }
    }
    if(b==0){
        printf("%d\n",k);
    }
    return 0;
}
