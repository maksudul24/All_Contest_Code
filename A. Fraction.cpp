#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 500000
using namespace std;

int gcd(int a,int b)
{
    int t;
    while (b != 0) {
             t = b;
             b = a % b;
             a = t;
    }
    return a;
}

void fun(int n)
{
    int i,x,a,b;
    i=1;
    while(i<n-i){
        if(gcd(i,n-i)==1){
            a=i,b=n-i;
        }
        i++;
    }
    printf("%d %d\n",a,b);

}

int main()
{
    int i,j,n,cas=0,ts;
   // FI,FO;
    scanf("%d",&n);
    fun(n);
    return 0;
}

