#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int l=0,r=0,u=0,d=0,len,i,x,y;
    char line[120];
    cin>>len;
    cin>>line;
    for(i=0;i<len;i++){
        if(line[i]=='L'){
            l++;
        }
        else if(line[i]=='R'){
            r++;
        }
        else if(line[i]=='U'){
            u++;

        }
        else if(line[i]=='D'){
            d++;
        }
    }
    if(l<r){
        x=2*l;
    }
    else{
        x=2*r;
    }
    if(u<d){
        y=2*u;
    }
    else{
        y=2*d;
    }
    printf("%d\n",x+y);
    return 0;
}
