#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,k,ara[110],i,j,ans=0,min_v=600,x,pos;
    cin>>n>>k;
    k--;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(i>=k){
                j=i;
                x=i-k;
            for(;j>=x;j--){
                ans+=ara[j];
            }
            if(ans<min_v){
                min_v=ans;
                pos=i-k+1;
            }
            ans=0;
        }
    }
    cout<<pos<<endl;
    return 0;
}
