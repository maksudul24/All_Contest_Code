#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
using namespace std;
int main()
{
    int cas=0,k,cnt,i;
    ll int x,y,ara[50050],n,w;
    scanf("%d",&k);
    while(k--)
    {
        cnt=1;
        scanf("%lld %lld",&n,&w);
        for(i=0;i<n;i++){
            scanf("%lld %lld",&x,&ara[i]);
        }
        sort(ara,ara+n);
        cout<<"Sorted"<<endl;
        for(i=0;i<n;i++) cout<<ara[i]<<endl;
        for(i=1;i<n;i++){
            x=ara[i]-ara[i-1];
            if(x>w) cnt++;
            printf(" %lld  %lld = %d ,cnt: ",ara[i],ara[i-1],x);
            cout<<cnt<<endl;
        }
        printf("Case %d: %d\n",++cas,cnt);

    }
    return 0;
}

