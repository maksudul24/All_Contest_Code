#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int x,l_ans,ans,y;
    double temp;
    long long int m,n,sum;
    cin>>x;
    m=(x/2)*(x+1);
    l_ans=(log(x)/log(2))+1;
    n=pow(2,l_ans)-1;

    ans=m-n;
    cout<<ans-n<<endl;
   /* x=ans;
    y=n;
    cout<<"m:"<<m<<"n:"<<n<<"x:"<<x<<"y:"<<y<<"ans:"<<ans<<endl;
    if(x-y<0){
        cout<<x-y<<endl;
    }
    else{
        cout<<ans-n<<endl;
    } */
    return 0;
}
