#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int cas=0,k,n,temp,i,cnt,sw,test;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        sw=1,test=0;
        temp=n;
        n=n-(n/5);
        n=n*5;
        while(temp!=cnt){
            cnt=0,i=5;
            while(n/i){
                cnt+=n/i;
                i*=5;
            }
            n+=5;
            test++;
            if(test>10){
                sw=0;
                break;
            }
        }
        if(sw) printf("Case %d: %d\n",++cas,n-5);
        else printf("Case %d: impossible\n",++cas);
    }
    return 0;
}
