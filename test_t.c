#include<stdio.h>
#include<math.h>
int cnt2;
int number2(int n)
{
    int x;
    cnt2++;
    if(n%5==0) x=number2(n/5);
    else return cnt2-1;
}
int main()
{
    int x,p;
    double y;
    scanf("%d %d",&x,&p);
    y=pow(x,p);

    printf("%d\n",x);
    return 0;
}
