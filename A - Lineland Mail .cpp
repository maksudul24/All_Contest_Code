#include<iostream>
#include<stdio.h>
using namespace std;

int mod(int n)
{
    if(n<0){
        n=n*(-1);
    }
    return n;
}

int main()
{
    int n,i,x,y;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++){
        cin>>ara[i];
    }
    n=n-1;
    x=mod(ara[0]-ara[1]);
    y=mod(ara[0]-ara[n]);
    cout<<x<<" "<<y<<"\n";
    for(i=1;i<n;i++){
        x=mod(ara[i]-ara[i-1]);
        y=mod(ara[i]-ara[i+1]);
        if(x<y) cout<<x<<" ";
        else cout<<y<<" ";
        x=mod(ara[i]-ara[0]);
        y=mod(ara[i]-ara[n]);
        if(x>y) cout<<x<<"\n";
        else cout<<y<<"\n";
    }
    x=mod(ara[n]-ara[n-1]);
    y=mod(ara[n]-ara[0]);
    cout<<x<<" "<<y<<"\n";
    return 0;
}
