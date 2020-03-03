#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,n,v,k=0,x,sw,y;
    int ara[100];
    cin>>n>>v;
    for(i=0;i<n;i++){
        cin>>x;
        sw=1;
        for(j=0;j<x;j++){
            cin>>y;
            if(y<v){
              if(sw==1){
                ara[k]=i+1;
                k++;
                sw=0;
              }
            }
        }
    }
    cout<<k<<"\n";
    for(i=0;i<k;i++){
        cout<<ara[i];
        if(i!=k-1){
            cout<<" ";
        }
    }
    cout<<"\n";
    return 0;
}
