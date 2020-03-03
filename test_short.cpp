#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[]={10,8,1,15,3,2,6,5},i;
    int n=sizeof(ara)/sizeof(ara[0]);
    sort(ara,ara+n);
    cout<<"Array shorted\n";
    for(i=0;i<8;i++){
        cout<<"ara["<<i<<"]="<<ara[i]<<"\n";
    }
    return 0;
}
