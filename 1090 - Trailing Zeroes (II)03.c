#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int cnt,cnt2;
int number(int n)
{
    int x;
    cnt++;
    if(n%5==0) x=number(n/5);
    else return cnt-1;
}
int number2(int n)
{
    int x;
    cnt2++;
    if(n%2==0) x=number2(n/2);
    else return cnt2-1;
}
int main()
{
    int n,r,p,q,k,i,cas=0,num,n_r,num_r,num_nr,m,j,num2,num2_r,num2_nr,t;
    double x;
    scanf("%d",&k);
    while(k--){
        cnt=0,cnt2=0;
        scanf("%d %d %d %d",&n,&r,&p,&q);
        n_r=n-r;
        num=n/5;
        num_r=r/5;
        num_nr=(n_r)/5;
        m=1.0*log10(n*1.0)/log10(5.0);
        for(i=2;i<=m+1;i++){
            x=pow(5,i);
            for(j=1;j*x<=n;j++){
                    num++;
                    if(j*x<=r) num_r++;
                    if(j*x<=n_r) num_nr++;
            }
         //   cout<<"x : "<<x<<" num: "<<num<<" r: "<<num_r<<" rn: "<<num_nr<<endl;
        }
        num2=n/2;
        num2_r=r/2;
        num2_nr=n_r/2;
        m=1.0*log10(n*1.0)/log10(2.0);
        for(i=2;i<=m+1;i++){
            x=pow(2,i);
            for(j=1;j*x<=n;j++){
                num2++;
                if(j*x<=r) num2_r++;
                if(j*x<=n_r) num2_nr++;
             //   cout<<"x "<<x<<" num2: "<<num2<<" r: "<<num2_r<<" rn: "<<num2_nr<<endl;
            }
        }
        if(p%2==0) t=number2(p);
        else t=0;
    //    cout<<"t: "<<t<<endl;
        t=t*q;
    //    cout<<"t: "<<t<<" m: "<<m<<endl;
        if(p%5==0) p=number(p);
        else p=0;
        p=p*q;
        num2+=t;
        num2=num2-num2_r-num2_nr;
     //   cout<<"p: "<<p<<" m: "<<m<<endl;
        num+=p;
        num=num-num_r-num_nr;
        if(num2<num) num=num2;
        printf("Case %d: %d\n",++cas,num);
    }
    return 0;
}
