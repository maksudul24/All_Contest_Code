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
#define Set(XX,PS) XX|(1<<PS)
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

int main()
{
    vector <string> s;
    string tmp;

    for(int i=0; i<3; i++)
    {
        cin >> tmp;
        s.push_back(tmp);
    }

    sort(s.begin(), s.end());

    if(s[0] == s[1] && s[0] == s[2]) cout<<0<<endl;
    else if((s[0][1] == s[1][1] && s[0][1] == s[2][1]) && (s[2][0]-s[1][0] == 1 && s[1][0]-s[0][0] == 1)) cout<<0<<endl;
    else
    {
        if(s[1] == s[2] || s[1] == s[0] || s[2] == s[0]) cout<<1<<endl;
        else if(((s[0][1] == s[1][1]) && (s[1][0] - s[0][0] == 1 || s[1][0] - s[0][0] == 2)) || ((s[0][1] == s[2][1]) && (s[2][0] - s[0][0] == 1 || s[2][0] - s[0][0] == 2)) || ((s[1][1] == s[2][1]) && (s[2][0] - s[1][0] == 1 || s[2][0] - s[1][0] == 2))) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
