#include<stdio.h>
int main()
{
    int n,i;
    double add=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&x);
        add+=(x/100);
    }
    add=(add/n)*100;
    printf("%0.12lf\n",add);
    return 0;
}
