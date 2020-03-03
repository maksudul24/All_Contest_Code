#include<stdio.h>

int main() {
    int n, caseno = 0, cases,i;
    long long int a, b, c, d, e, f,ans;
    scanf("%d", &cases);
    while( cases-- ) {
        ans=0;
        scanf("%lld %lld %lld %lld %lld %lld %d", &a, &b, &c, &d, &e, &f, &n);
        if(n<=5){
            n++;
            if( n == 1 ) ans=a % 10000007;
            else if( n == 2 ) ans=b % 10000007;
            else if( n == 3 ) ans=c % 10000007;
            else if( n == 4 ) ans=d % 10000007;
            else if( n == 5 ) ans=e % 10000007;
            else if( n == 6 ) ans=f % 10000007;

        }
        else{
            for(i=5;i<n;i++){
                ans=(a+b+c+d+e+f)% 10000007;
                a=b;
                b=c;
                c=d;
                d=e;
                e=f;
                f=ans;
            }
        }
        printf("Case %d: %lld\n", ++caseno, ans);
    }
    return 0;
}
