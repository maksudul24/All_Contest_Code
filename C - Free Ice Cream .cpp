#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int i,total,j=0,child=0,n,x,d,m=0;
    char sin;
    cin>>n>>x;
    total=x;
    for(i=0;i<n;i++){
        cin>>sin;
        cin>>d;

        if(sin=='-'){
            if(total>=d){
                total=total-d;
            }
            else{
                child++;
            }
        }
        else{
            total=total+d;

        }
    }
    cout<<total<<" "<<child<<endl;
    return 0;
}
