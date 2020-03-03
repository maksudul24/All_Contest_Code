#include<stdio.h>
int main()
{
    int t,s,x;
    scanf("%d %d %d",&t,&s,&x);
    if(((x-t)%s==0 ||(x-t)%s==1) && (x-t)>=s){
        printf("YES\n");
    }
    else if(x==t){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
