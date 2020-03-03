#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,minm,x,y,ans,bminm;
	cin>>a;
	cin>>b;
	if(b>a) b=a;
	cin>>c;
	if(c<a) minm=c;
	else minm=a;
	cin>>d;
	if(minm>d) minm=d;
	if(a<=minm){
        bminm=minm-a;
	}
	else{
        bminm=a-minm;
	}
	if(bminm<b){
        b=bminm;
	}
	ans=(b*32)+(minm*256);
	cout<<ans<<"\n";
	return 0;
}
