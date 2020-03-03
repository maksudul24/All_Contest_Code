#include<stdio.h>
#include<string.h>
int main()
{
    int x,count=0;
    long long int n;
    scanf("%lld",&n);
    while(n>0){
            x=n/10;
            x=n-(x*10);
            if(x==7 || x==4){
                count++;

            }
            n=n/10;


    }
    if(count==7 || count==4){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
