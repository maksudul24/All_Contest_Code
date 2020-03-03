//code hint: all the number divided n greater than n/2 is 1;
//from one divisor to next divisor found by,
// dividing n by first divisor multiple it by (next divisor - divisor) with answer.

#include<bits/stdc++.h>
using namespace std;
long long H( int n ) {
    long long res = 0;
    for( int i = 1; i <= n; i++ )
        res = res + n / i;
    return res;
}
int main()
{
    int a,k,cas=0,i,cnt,b;
    int ans=1,ara[200000],x,h,temp;
    long long int n;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        n=H(n);
        printf("Case %d: %d\n",++cas,n);

    }
    return 0;
}
