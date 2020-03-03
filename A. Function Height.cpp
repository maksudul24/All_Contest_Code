#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,x,k;
    cin>>n>>k;
    x=k/n;
    if(k%n!=0 && k>n) x++;
    else if(!x) x++;
    cout<<x<<endl;
}
