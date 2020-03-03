#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int cas=0,k,ara[SIZE],ans=0;
    double ans2;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&ara[i]);
        ans+=ara[i];
    }
    if(ans%2==0) ans2=(1.0*ans)/2;
    else ans2=((1.0*ans)/2)+1;
    ans=0;
    for(i=0;i<k;i++){
            ans+=ara[i];
        if(ans>=ans2){
            ans=i+1;
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}
