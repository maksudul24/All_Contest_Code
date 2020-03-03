#include<stdio.h>
int main()
{
    int i,sw=0,sw2=0,tst=0,error=0,n,sw3=0;
    scanf("%d",&n);
    int ara[n];
    scanf("%d",&ara[0]);
    for(i=1;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>ara[i-1]){
            sw=1;
            tst=1;
        }
        if(ara[i]==ara[i-1]){
            sw2=1;
            tst=1;
        }
        if((ara[i]<ara[i-1] && sw2==1) || (ara[i]<ara[i-1] && sw==1) ){

            sw3=1;
            tst=0;
        }
        if(tst==1 && ara[i]<ara[i-1]){
                error=1;
        }
    }
    if(sw2==1 && error!=1){
        printf("YES\n");
    }
    else if(error ==1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}
