#include<stdio.h>
int main()
{
    int n;
    long long int a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%lld %lld",&a,&b);
        if(a && b){
            if(a%b==0) printf(":wink:\n");
        //    else if(b%a==0) printf(":wink:\n");

            else printf(":kick:\n");
        }
        else{
                if(a==0 && b!=0) printf(":wink:\n");
                else printf(":kick:\n");
        }
    }
    return 0;
}

