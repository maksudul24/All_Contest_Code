#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,cas=0,i,sw=0;
    long long int ans,a,b,max_x,max_y,min_x,min_y;
        scanf("%d",&n);
        scanf("%I64d %I64d",&a,&b);
        max_x=a,max_y=b,min_x=a,min_y=b;
        for(i=1;i<n;i++){
            sw=1;
            scanf("%I64d %I64d",&a,&b);
            if(a>max_x) max_x=a;
            if(b>max_y) max_y=b;
            if(a<min_x) min_x=a;
            if(b<min_y) min_y=b;
        }
            a=max_x-min_x;
            b=max_y-min_y;
        if(a>b) ans=a*a;
        else ans=b*b;
        cout<<ans<<endl;
    return 0;
}
