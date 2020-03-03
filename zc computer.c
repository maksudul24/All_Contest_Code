#include<stdio.h>
int main()
{
    int n,limit,add=1,i;
    scanf("%d %d",&n,&limit);
    int ara[n];
    scanf("%d",&ara[0]);
    for(i=1;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]-ara[i-1]<=limit){
            add++;
        }
        else{
            add=1;
        }
    }
    printf("%d\n",add);
    return 0;
}
