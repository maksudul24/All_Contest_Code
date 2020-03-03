#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ara[5],i,j,k;
    cin>>k;
    for(j=1;j<=k;j++){
            for(i=0;i<3;i++){
                scanf("%d",&ara[i]);
            }
            sort(ara,ara+3);
            if(((ara[0]*ara[0])+(ara[1]*ara[1]))==(ara[2]*ara[2])){
                cout<<"Case "<<j<<": yes\n";
            }
            else{
                cout<<"Case "<<j<<": no\n";
            }
    }
}
