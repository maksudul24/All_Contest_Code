#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
using namespace std;
int main()
{
    int cas=0,k,sw2,sw,n,i,save,cnt,wait;
    char str[1000];
    scanf("%d",&k);
    while(k--)
    {
        cnt=0;
        scanf("%d",&n);
        scanf("%s",str);
        if(str[0]=='#') save=1;
        else save=2;
        for(i=0;i<n;){
            if(str[i]=='.'){
                i+=2;
                cnt++;
            }
            i++;

        }
        getchar();
        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}

