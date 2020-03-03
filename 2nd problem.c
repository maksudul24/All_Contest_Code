#include<stdio.h>
int main()
{
    int i,n,max=0,position=0,add=0;
    scanf("%d",&n);
    int ara[n];
    scanf("%d",&ara[0]);
    max=ara[0];
    for(i=1;i<n;i++){
        scanf("%d",&ara[i]);
        if(max<ara[i]){
            max=ara[i];
            position=i;
        }
    }
    for(i=0;i<n;i++){
            if(i!=position){
                add+=max-ara[i];

            }
    }
    printf("%d\n",add);
    return 0;
}
