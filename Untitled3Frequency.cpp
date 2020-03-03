// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <iostream>
#include<cstdio>
#include<cstring>
#include <map>
using namespace std;

// Function to print all distinct palindrome sub-strings of s
void palindromeSubStrs(string s,int cas)
{
    map<string, int> m;
    int n = s.size();

    int R[2][n+1];


    s = "@" + s + "#";

    for (int j = 0; j <= 1; j++)
    {
        int rp = 0;
        R[j][0] = 0;

        int i = 1;
        while (i <= n)
        {

            while (s[i - rp - 1] == s[i + j + rp])
                rp++;

            R[j][i] = rp;
            int k = 1;
            while ((R[j][i - k] != rp - k) && (k < rp))
            {
                R[j][i + k] = min(R[j][i - k],rp - k);
                k++;
            }
            rp = max(rp - k,0);
            i += k;
        }
    }


    s = s.substr(1, n);


    m[string(1, s[0])]=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 1; j++)
            for (int rp = R[j][i]; rp > 0; rp--)
               m[s.substr(i - rp - 1, 2 * rp + j)]=1;
        m[string(1, s[i])]=1;
    }

    int cnt,ans,i_ind,j_ind,x;
    char ara[100000],ch;
   map<string, int>::iterator ii;
   for(i_ind=0;i_ind<cas;i_ind++){
        scanf("%d %c",&x,&ch);
        ans=0;
       for (ii = m.begin(),cnt=0; ii!=m.end();cnt++, ++ii){
            if(cnt==x){
                strcpy(ara,*ii);
                len=strlen(ara);
                for(j_ind=0;j_ind<len;j_ind++){
                    if(ara[j_ind]==ch) ans++;
                }
                break;
            }
       }
       printf("%d\n",ans);

   }
}


int main()
{
    int n,cas;
    char ara[1000000];
    sacnf("%d %d",&n,&cas);
    palindromeSubStrs(ara,cas);
    return 0;
}
