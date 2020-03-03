#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define INF INT_MAX
#define LL long long
#define ULL unsigned LL
#define EPS 0.00000001
#define PI acos(-1.0)
#define MOD 100000007LL
#define pii pair<int,int>
#define pll pair<LL,LL>
#define ck(XX) cout<<XX<<endl
#define Set(XX,PS) XX(1<<PS)
#define Reset(XX,PS) XX&(~(1<<PS))
#define Toggle(XX,PS) (XX^(1<<PS))
#define Check(XX,PS) (bool)(XX&(1<<PS))
#define SORT(v) sort(v.begin(),v.end())
#define REVERSE(V) reverse(v.begin(),v.end())
#define Fin freopen("input.txt","r",stdin)
#define Fout freopen("output.txt","w",stdout)
#define VALID(X,Y,R,C) X>=0 && X<R && Y>=0 && Y<C
#define SIZE(ARRAY) sizeof(ARRAY)/sizeof(ARRAY[0])
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define RT printf("Run Time : %0.3lf seconds\n", clock()/(CLOCKS_PER_SEC*1.0))
#define SIZE1 120

int main()
{
    long long int max_v,a,b,n,i,j,ara[SIZE1];
    bool sw;
    while(1){
        scanf("%lld",&n);
        max_v=0;
        if(!n) break;
        for(i=0;i<n;i++){
            scanf("%lld",&ara[i]);
        }
        for(i=0;i<n;i++){
                a=0;
                b=0;
                sw=true;
            for(j=0;j<n;j++){
                if(j>=i){
                    sw=false;
                }
                if(sw) a+=ara[j];
                else b+=ara[j];
            }
            cout<<"a:"<<a<<" b:"<<b<<" ans:"<<a-b<<endl;
            if(a>=b){
                a=a-b;
            }
            else{
                a=b-a;
            }
            if(!max_v) max_v=a;
            else if(a>max_v) max_v=a;
        }
        printf("%lld\n",max_v);
    }
    return 0;
}
