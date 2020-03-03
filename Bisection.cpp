#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
double square(double x)
{
    double low=0,high=x,mid;
    for(int i=0;i<64;i++){
        mid=(high+low)/2;
        if(mid*mid>x) high=mid;
        else low=mid;
    }
    printf("%lf square= %lf\n",mid,x);
}
int main()
{
    int cas=0,k;
    double x;
    //freopen("in.txt","r",stdin);
    scanf("%d",&k);
    while(k--)
    {
        scanf("%lf",&x);
        x=square(x);
    }
    return 0;
}

