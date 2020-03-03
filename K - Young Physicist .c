#include<stdio.h>
int main()
{
    int n,i,add1=0,add2=0,add3=0;
    scanf("%d",&n);
    int ara1[n],ara2[n],ara3[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara1[i]);
        add1=ara1[i]+add1;
        scanf("%d",&ara2[i]);
        add2=ara2[i]+add2;
        scanf("%d",&ara3[i]);
        add3=ara3[i]+add3;
    }
    if(add1== 0 && add2==0 && add3==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
