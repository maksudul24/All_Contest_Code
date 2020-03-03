#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    long long int a1,b1,a2,b2,x,y,c,n,i,count=0;
    cin>>a1,b1,a2,b2;
    cin>>n;
    for(i=0;i<n;i++){
        cin<<x,y,c;
        if((a2*x+b2*y)>c && (a1*x+b1*y)<c){
            count++;
        }
        else if((a2*x+b2*y)<c && (a1*x+b1*y)>c){
            count++;
        }
    }
    printf("%lld\n",count);
    return 0;
}
