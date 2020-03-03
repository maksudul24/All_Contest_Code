#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020
#define Mod 1000003
using namespace std;
int ara[SIZE];
int mul_inv(int a, int b);
int main()
{
    int cas=0,k;
    ll int x,y,i,j,n,r,ans=1;
   // freopen("in.txt","r",stdin);
    scanf("%d",&k);
    ara[0]=1;
    for(i=1;i<=1000000;i++){
            ans=(i*ans)%Mod;
            ara[i]=ans;
    }
    while(k--)
    {
        scanf("%lld",&n);
        printf("%d\n",ara[n]);
    //    if(n-r>1)ans=(ara[n]*mul_inv(ara[r],Mod)*mul_inv(ara[n-r],Mod))%Mod;
     //   else ans=n;
      //  printf("Case %d: %lld\n",++cas,ans);
    }
    return 0;
}
int mul_inv(int a, int b)
{
	int b0 = b, t, q;
	int x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}

