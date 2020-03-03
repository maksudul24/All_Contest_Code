#include<stdio.h>
#include<math.h>
int main()
{
    int r,d,n,a,b,c,i,count=0,oth;
    double x,m,t;
    scanf("%d %d",&r,&d);
    oth=r-d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %d %d %d",&a,&b,&c);
        a=(a*a+b*b);
        x=sqrt(a);
        m=x-c;
        t=x+c;
        if(m>=oth && t<=r){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
