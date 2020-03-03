#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,x,temp=0,cnt,carry=0,i=1,ans=0,check,leng=0;
    scanf("%d %d",&n,&x);
    a=n;
    while(!temp){
        temp=a%10;
        a=a/10;
        if(!temp) ans++;
    }
    temp=10-temp;
    cnt=temp;
    check=temp;
    while(n){
        n=n/10;
        leng++;
    }
    if(cnt<=x) ans++;
    while(1){
        check=a%10;
        temp=9-check;
        cnt+=temp;
        if(cnt>x || (!check && ans<leng)) break;
         ans++;
        a=a/10;
    }
    printf("%d\n",ans);
    return 0;
}
