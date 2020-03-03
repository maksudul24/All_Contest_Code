#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int long long x,y,ans;
    int cas=0,n;
    scanf("%d",&n);
    while(n--){
            y=1;
        cin>>x;
        ans=x;
        if(x%2==0){
            while(x%2==0){
                x=x/2;
                y=2*y;
            }

            cout<<"Case "<<++cas<<": "<<ans/y<<" "<<y<<endl;

        }
        else{
            cout<<"Case "<<++cas<<": Impossible"<<endl;
        }
    }
    return 0;

}
