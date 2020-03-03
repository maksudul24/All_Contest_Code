#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 100000
#define uu first
#define vv second
#define pii pair<int,int>
#define MAX 100000

using namespace std;

void printSubstrings(string s)
{

    // To store distinct output substrings
    unordered_set<string> us;

    // Traverse through the given string and
    // one by one generate substrings beginning
    // from s[i].
    for (int i = 0; i < s.size(); ++i) {

        // One by one generate substrings ending
        // with s[j]
        string ss = "";
        for (int j = i; j < s.size(); ++j) {

            ss = ss + s[j];
            us.insert(ss);
        }
    }

    // Print all substrings one by one
    for (auto s : us)
        cout << s << " ";
}

int main()
{
    int i,j,cas=0,ts,ans,k,n,m;
    string ara;
   // FI;
    cin>>ara;
   printSubstrings(ara);
    return 0;
}

