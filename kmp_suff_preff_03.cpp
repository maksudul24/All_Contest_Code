#include <bits/stdc++.h>
#define FO freopen("out.txt","w",stdout);
#define SIZE 100001
using namespace std;

int lps[SIZE];

void computeLPSArray(char* pat,int M)
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
        else{
            if (len != 0) {
                len = lps[len - 1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}


int main()
{
    int i,j,n,cas=0,ts;
    int ara[SIZE];
    char str[SIZE];
    freopen("in.txt","r",stdin);
    FO;
    scanf("%d",&ts);
    getchar();
    while(ts--){
        scanf("%s",str);
        n=strlen(str);
        computeLPSArray(str,n);
        for(i=0;i<n;i++) printf("%d ",i);
        cout<<endl;
        for(i=0;i<n;i++) printf("%c ",str[i]);
        cout<<endl;
        for(i=0;i<n;i++) printf("%d ",lps[i]);
        cout<<endl;
    }
    return 0;
}
