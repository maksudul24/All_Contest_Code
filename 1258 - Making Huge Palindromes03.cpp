#include <bits/stdc++.h>
#define SIZE 1000010
#define FO freopen("out.txt","w",stdout);

bool sw;
void computeLPSArray(char* pat, int M, int* lps);

// Prints occurrences of txt[] in pat[]
int KMPSearch(char* pat)
{
    int cnt=0;
    int temp=0;
    int M = strlen(pat);
    int lps[M+10];

    computeLPSArray(pat, M, lps);

    int i = 0;
    int j = M-1;
    while (i < M) {
        if(i==j){
            sw=true;
            return cnt;
        }
        if (pat[j] == pat[i]) {
            cnt++;
         //    printf("i:%d=%c=j:%d\n",i,pat[i],j);
            j--;
            if(i==j){
                sw=false;
                return cnt;
            }
            i++;
        }
        if (i < M && pat[j] != pat[i]) {
            if(j != M-1){
              //  printf("%d\n",temp);
                temp = lps[j+1];
                cnt=M-temp-1;
                j=temp;

            }
            else{
                i = i + 1;
            }
        }
    }
    return M;
}

void computeLPSArray(char* pat,int M,int* lps)
{
        int len = M-1;
        lps[M-1] = M-1;
        int i = M-2;
        while (i >= 0) {
            if (pat[i] == pat[len]) {
                len--;
                lps[i] =len;
                i--;
            }
            else{
                if (len != M-1) {
                    len = lps[len + 1];
                }
                else{
                    lps[i] = M-1;
                    i--;
                }
            }
        }
}

int main()
{
    int n,cas=0,ts,ans;
    char str[SIZE];
 //   freopen("in.txt","r",stdin);
 //   FO;
    scanf("%d",&ts);
    getchar();
    while(ts--){
            sw=false;
        scanf("%s",str);
        n=strlen(str);
        ans=KMPSearch(str);
     //   printf("ans:%d\n",ans);
        if(ans==n) ans=n+n-1;
        else{
            ans=(n-2*ans)+n;
            if(sw) ans--;
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}
