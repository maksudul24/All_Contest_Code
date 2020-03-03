#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int cas=0,k,n,x,i,max_v,cnt,ara[SIZE],cnt2;
    scanf("%d",&k);
    while(k--)
    {
        cnt=0,max_v=0,cnt2=0;
        scanf("%d",&n);
        ara[0]=0;
        for(i=1;i<=n;i++) scanf("%d",&ara[i]);
        for(i=n;i>0;i--){
            x=ara[i]-ara[i-1];
            if(x>max_v){
                if(x-max_v!=1) cnt=0;
                max_v=x;
            }
            else if(x==max_v){
                cnt++;
            }
        }
        if(cnt>0) cnt=1;
        else cnt=0;
        cout<<"Max: "<<max_v<<" cnt: "<<cnt<<endl;
        printf("Case %d: %d\n",++cas,max_v+cnt);
    }
    return 0;
}
