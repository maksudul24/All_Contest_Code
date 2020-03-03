#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>ara[i-1]){
            ara2[i]=-1;
        }
        else if(ara[i]==ara[i-1]){
            ara2[i]=0;
        }
        else if(ara[i]<ara[i-1]){
            ara2[i]=1;
        }
    }
    if(ara2[0]==0){
        sw1=0;
    }
    n--;
    for(i=0;i<n;i++){
        if(ara2[i]==-1){
            sw=1;
        }
        else if(sw2==1 && ara2[i]==0){
                sw2=1;
                sw=0;
        }
        else if(ara[i]==1)
    }
