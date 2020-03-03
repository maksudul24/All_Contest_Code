#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int k,mark[500],cnt=0,i,sw,n,cnt2,len[1060],j;
    char ara[1005][1005];
    scanf("%d",&k);
    getchar();
    for(j=0;j<k;j++)
    {
        scanf("%s",ara[j]);
        sw=1;
        n=strlen(ara[j]);
        len[j]=n;
        for(i=0;i<n;i++){
            if(mark[ara[j][i]]!=1){
                mark[ara[i]]=1;
            }
        }
        memset(mark,0,sizeof(mark));
    }
    printf("%d\n",cnt);
    return 0;
}

