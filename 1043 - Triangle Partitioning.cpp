#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
double m,x,R;
double bisec(double n);
int main()
{
    int cas=0,k;
    double a,b,c,temp;
 //   freopen("in.txt","r",stdin);
    scanf("%d",&k);
    while(k--)
    {
        scanf("%lf %lf %lf %lf",&a,&c,&b,&R);
        temp=(a+b+c)*(a+b-c)*(a+c-b)*(b+c-a);
        x=temp/(16*a*a*a*a);
        temp=a+c+b;
        m=temp/2;
        m=m*(m-a)*(m-b)*(m-c);
        m=sqrt(m);
      //  printf("M:%lf , X:%lf\n",m,x);
        printf("Case %d: %0.6lf\n",++cas,bisec(a));
    }
    return 0;
}
double bisec(double n)
{
    double mid,high,low,temp;
    low=0,high=n;
    while(high-low>0.00000001){
        mid=(high+low)/2;
      //  printf("%lf\n",mid);
        temp=mid*mid*mid*mid*x;
        temp=sqrt(temp);
        if((temp/(m-temp))>R) high=mid;
        else low=mid;
    }
    return mid;
}

