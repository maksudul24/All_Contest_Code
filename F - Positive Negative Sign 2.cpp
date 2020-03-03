#include<iostream>
using namespace std;
int main()
{
    int k,i;
    long long int x,m,n;
    cin>>k;
    for(i=1;i<=k;i++){
            cin>>m>>n;
            x=(m*n)/2;
            cout<<"Case "<<i<<": "<<x<<endl;
    }
    return 0;

}
