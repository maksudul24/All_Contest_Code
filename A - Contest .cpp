#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int p1,t1,p2,t2;
    double x,y;
    cin>>p1>>p2>>t1>>t2;

    x=std::max(((3*p1*1.0)/10),p1-((p1*t1*1.0)/250));
    y=std::max(((3*p2*1.0)/10),p2-((p2*t2*1.0)/250));
    if(x>y){
        cout<<"Misha\n";
    }
    else if(x==y){
        cout<<"Tie\n";
    }
    else{
        cout<<"Vasya\n";
    }
    return 0;
}
