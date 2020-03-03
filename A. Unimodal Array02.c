#include<stdio.h>
int main()
{
    int n,i,sw,eq=0,up=0,down=0,in1=0,in2=0,in3=0,cnt=0;
    scanf("%d",&n);
    int ara[n];
    scanf("%d",&ara[0]);

    for(i=1;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]<ara[i-1]){
            sw=1;
            down=0;
            eq=0;
        }
        else if(ara[i]==ara[i-1]){
            sw=2;
            up=0;
            down=0;
        }
        else{
            sw=3;
            up=0;
            eq=0;
        }
        if(sw==1 && in1==0){
            in1=1;
            up=1;
        }
        else if(sw==2 && in2==0){
            in2=1;
            eq=1;
        }
        else if(sw==3 && in3==0){
            in3=1;
            down=1;
        }
        if(sw==1 && up==1){
            cnt++;
        }
        else if(sw==2 && eq==1){
            cnt++;
        }
        else if(sw==3 && down==1){
            cnt++;
        }
    }
    if(cnt==n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
