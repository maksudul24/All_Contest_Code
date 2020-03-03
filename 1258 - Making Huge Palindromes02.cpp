#include <bits/stdc++.h>
#define SIZE 1000010
#define FO freopen("out.txt","w",stdout);

void computeLPSArray(char* pat, int M, int* lps);

// Prints occurrences of txt[] in pat[]
int KMPSearch(char* pat, char* txt)
{
    int cnt=0;
    int M = strlen(pat);
    int N = strlen(txt);
    int len=N/2;

    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];

    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int j = n-1; // index for pat[]
    while (i < N) {
        if (pat[j] == txt[i]) {
            j--;
            i++;
        }

        if (j == M) {
            j = lps[j - 1];
        }

        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return cnt;
}

// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
    // length of the previous longest prefix suffix
    int len = 0;

    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];

                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Driver program to test above function
int main()
{
    int i,j,n,cas=0,ts;
    char sub_str[SIZE],str[SIZE];
    freopen("in.txt","r",stdin),FO;
    scanf("%d",&ts);
    getchar();
    while(ts--){
        scanf("%s %s",str,sub_str);
        i=strlen(str);
        j=strlen(sub_str);
        if(i>=j) printf("Case %d: %d\n",++cas, KMPSearch(sub_str, str));
        else printf("Case %d: 0\n",++cas);
    }
    return 0;
}
