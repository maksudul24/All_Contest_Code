#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int x,y,add=0,temp;
    cin>>x>>y;
    if(y>x){
        temp=x;
        x=y;
        y=temp;
     }

    while(1){
        if(x!=1 && y!=1){
            add+=x/y;
            temp=x%y;
                x=y;
                y=temp;
                if(temp==0){
                    break;
                }
        }
        else{
            if(x==1){
                add+=y;
            }
            else{
                add+=x;
            }
            break;
        }
    }
    cout<<add<<"\n";
    return 0;
}



