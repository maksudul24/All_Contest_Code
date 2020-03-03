#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
int ara[10000],cal;
int chq(int n)
{
    int x,temp;
    if(ara[n]==n) return cal;
    cal++;
    x=ara[n];
    temp=ara[x];
    ara[x]=x;
    ara[n]=temp;
    x=chq(n);

}
using namespace std;
int main()
{
    int cas=0,k,i,n,cnt2,num,x,cnt;
    scanf("%d",&k);
    while(k--)
    {
        cnt=0,cnt2=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=n;i++){
            if(ara[i]!=i){
                if(i==ara[ara[i]]){
                    x=ara[i];
                    ara[i]=i;
                    ara[x]=x;
                    cnt++;
                }
                else if(ara[i]!=i){
                    cal=0;
                  cnt+=chq(i);
                //  cout<<"cnt: "<<cnt<<endl;
                }
            }
        }
        //cout<<cnt2<<endl;
       // if(cnt2>1) cnt+=cnt2;
        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}


