#include<stdio.h>

int fac(int n)
{
    int add=1,i;
    for(i=1;i<n;i++){
        add+=i*add;
    }
    return add;
}

int gcd_f(int a,int b)
{
    int t;
    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main()
{
    int a,b,t,gcd;
    scanf("%d %d",&a,&b);
    a=fac(a);
    b=fac(b);
    if(b>a){
        t=a;
        a=b;
        b=t;
    }
    gcd=gcd_f(a,b);
    printf("%d\n",gcd);
    return 0;
}
