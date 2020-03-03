#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c,d,x,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d %d %d %d",&a,&b,&c,&d);
            x=((a-c)*(a-c))+((b-c)*(b-c));
            x=sqrt(x);
            x=sqrt(2)*x;
            printf("%d\n",x);
    }
    return 0;
}
