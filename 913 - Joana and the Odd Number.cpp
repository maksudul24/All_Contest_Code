#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
        long long int n,a,x;
    while(1==(scanf("%lld",&x))){
        n=((x-1)/2)+1;
        n--;
        n=n*n+1;
        a=2*n-1;
        n=((3*a)+(6*x))-12;
        cout<<n<<endl;
    }
    return 0;
}
