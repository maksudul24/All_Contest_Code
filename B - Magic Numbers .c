#include<stdio.h>

int call(int n)
{
    int x;
    if(n==0) return 1;
    if(n%10==1) x=call(n/10);

    else if(n%10==4){
            n=n/10;
        if(n%10==4){
            n=n/10;
            if(n%10==1){
                x=call(n/10);
            }
            else return 0;
        }
        else if(n%10==1) x=call(n/10);
        else return 0;
    }
    else return 0;
}

int main()
{
    int x,m;
    scanf("%d",&m);
    if(call(m)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
