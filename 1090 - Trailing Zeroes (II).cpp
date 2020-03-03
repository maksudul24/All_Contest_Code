#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int k,cas=0,cnt,i,count_n;
    long long int n,p,r,q;
    unsigned long long int a,b;
    scanf("%d",&k);
    while(k--){
            a=1,b=1;
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);
        cnt=q;
        count_n=0;
        for(i=n;count_n<r;i--){
            a=a*i;

            a=a*p;
            cnt--;

            count_n++;
            b=b*count_n;

            if(a%b==0){
                a=a/b;
                b=1;
            }
        }
        if(cnt>0) a=a*pow(p,q-r);
        printf("Case %d: %d\n",++cas,a);

    }
    return 0;
}
