#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,x,temp=0,num,cnt,carry=0,i,ans=0;
    scanf("%d %d",&n,&x);
    a=n;
    while(!temp){
        temp=a%10;
        a=a/10;
        if(!temp) ans++;
    }
    temp=10-temp;
    cnt=temp;
    num=temp;
    if(cnt<=x) ans++;
    i=10;
    while(temp){
        temp=a%10;
        temp=9-temp;
        cnt+=temp;
        if(cnt>x || !temp) break;
         ans++;
        num=temp*i+num;
        i*=10;
        a=a/10;
    }
    printf("%d\n",ans);
    return 0;
}
