#include<stdio.h>
int main()
{
    int a,b,n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                scanf("%d %d",&a,&b);
                a=b-a;
                if(a>=2){
                    count++;
                }
    }
    printf("%d\n",count);
    return 0;
}
