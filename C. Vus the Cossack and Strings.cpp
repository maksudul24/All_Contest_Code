#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1000010
using namespace std;

char ara[SIZE],s_ara[SIZE];

 /*oid KMPSearch(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);

    int lps[M];


    computeLPSArray(pat, M, lps);

    int i = 0;
    int j = 0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
            printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
        }
        else if (i < N && pat[j] != txt[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}


void computeLPSArray(char* pat, int M, int* lps)
{

    int len = 0;

    lps[0] = 0;


    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {

            if (len != 0) {
                len = lps[len - 1];

            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
*/


int main()
{
    int i,j,n,ans=0,cnt=0,m;
   //s freopen("in.txt","r",stdin);
    scanf("%s %s",ara,s_ara);
    n=strlen(ara);
    m=strlen(s_ara);
    for(i=0;i<n-m+1;i++){
        for(j=0;j<m;j++){
            if(ara[i+j]!=s_ara[j]){
                cnt++;
            }
        }
        if(cnt%2==0){
                    ans++;
        }
                cnt=0;
    }
    printf("%d\n",ans);
    return 0;
}

