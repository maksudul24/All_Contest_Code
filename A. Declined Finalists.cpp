#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i,x,maxn=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&x);
            if(x>maxn){
                maxn=x;
            }
    }
    if(maxn<=25){
        x=0;
    }
    else{
        x=maxn-25;
    }
    printf("%d\n",x);
    return 0;
}
