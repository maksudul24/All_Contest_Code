#include<stdio.h>
#include<math.h>
int main()
{
    int k,cas=0,cnt,i,count;
    long long int n,p,r,q;
    unsigned long long int a,b;
    scanf("%d",&k);
    while(k--){
            a=1,b=1;
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);
        cnt=q;
        count=0;
        for(i=n;count<=r;i--){
            a=a*i;
            if(cnt>0){
                a=a*p;
                cnt--;
            }
            count++;
            b=b*count;
            if(a%b==0){
                a=a/b;
                b=1;
            }
            cout<<a<<" "<<b<<endl;
        }
        if(cnt>0) a=a*pow(p,q);
        printf("Case %d: %d\n",++cas,a);

    }
    return 0;
}
