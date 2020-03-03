#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
using namespace std;

typedef long long ll;
ll arr[100][100];
ll nCr(ll n, ll r) {
	if(n == r) return 1;
	if(r == 1) return n;
	if(arr[n][r] == 0) {
		arr[n][r] = nCr(n-1, r-1) + nCr(n-1,r);
	}
	return arr[n][r];
}

int main() {
    freopen("in.txt","r",stdin),FO;
	ll n, r;
	while(scanf("%lld %lld", &n, &r), (n | r)) {
		ll result = nCr(n, r);
		printf("%lld things taken %lld at a time is %lld exactly.\n", n, r, result);
	}
	return 0;
}
