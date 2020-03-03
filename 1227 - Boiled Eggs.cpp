#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,ara[40],ans,cnt,cas=0,k;
    scanf("%d",&k);
    while(k--){
                scanf("%d %d %d",&n,&p,&q);
                ans=0;
                cnt=0;
                for(int i=0;i<n;i++){
                    scanf("%d",&ara[i]);
                }
                sort(ara,ara+n);
                if(p<n) n=p;
                for(int i=0;i<n;i++){
                    ans+=ara[i];
                    if(ans<=q) cnt++;
                    else break;
                }
                printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}
