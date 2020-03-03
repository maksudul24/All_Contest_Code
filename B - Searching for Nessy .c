#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            a=a/3;
            b=b/3;
            a=a*b;
            if(a==0){
                a=1;
            }
            printf("%d\n",a);
    }
    return 0;
}
