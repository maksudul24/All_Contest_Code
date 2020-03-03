#include<stdio.h>

int fun(int y)
{   int cnt1=0,cnt2=0,n,a,b,k;
    n=y;
    while(n){
        k=n%10;

        if(k==7 || k==4){
        cnt1++;
        }
        n=n/10;
        cnt2++;
    }
    if(cnt1==cnt2){
        return 1;
    }
    else{
        a=y/4;
        b=y/7;
        if(a%2==0 || b%2==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 0;

}
int main()
{
    int n;
    scanf("%d",&n);
    n=fun(n);
    if(n==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
