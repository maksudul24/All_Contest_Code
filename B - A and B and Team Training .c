#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int x,y,carry,ans,temp;
    cin>>x>>y;
    if(y>x){
        temp=x;
        x=y;
        y=temp;
    }
    ans=x/2;
    if(y>=ans){
        y=ans-y;
        carry=x%2;
        if(carry>0){
            if(y>1){
                ans++;
            }
        }
        else{
           if(y/2>=x){
            ans=y;
           }
           else{
            ans=x/2;
           }
        }
    }
}
