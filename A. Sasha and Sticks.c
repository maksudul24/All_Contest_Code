#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%I64d %I64d",&a,&b);
    c=a/b;
    printf("%I64d\n",c);
    if(c%2==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}
