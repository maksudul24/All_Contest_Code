#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
ll int cnt;
using namespace std;
ll int pal(ll int x)
{
    ll int i,len,ara[10000],j,temp,ot,num,sw=0;
    cnt++;
    temp=x;
    num=0;
    for(i=0;x;i++){
        ara[i]=x%10;
        x=x/10;
        num=num*10+ara[i];
    }
    len=i/2;
    for(j=i-1,i=0;i<len;i++,j--){
        if(ara[i]!=ara[j]){
            sw=1;
            break;
        }
    }
    if(sw==1){
        temp=num+temp;
        x=pal(temp);
    }
    else return temp;
}
int main()
{
    ll int cas=0,k,n,x;
    scanf("%lld",&k);
    while(k--)
    {
        cnt=0;
        scanf("%lld",&n);
        x=pal(n);
        printf("%lld %lld\n",cnt-1,x);
    }
    return 0;
}
