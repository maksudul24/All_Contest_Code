#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(b>a && b<c || b>c && b<a){
            printf("Case %d: %d\n",i,b);
        }
        if(a>c && a<b || a>b && a<c){
            printf("Case %d: %d\n",i,a);
        }
        if(c>a && c<b || c>b && c<a){
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
