#include<stdio.h>
int find_max(int ara[9])
{
    int i,max=0;
    for(i=1;i<=9;i++){
        if(max<ara[i]){
            max=ara[i];
        }
    }
    return max;
}
int maxindx(int ara[9],int x)
{
    int i,y;
    for(i=1;i<=9;i++){
            if(x==ara[i]){
                y=i;
            }
    }
    return y;
}
int count(int ara[9],int x)
{
    int i,cnt=0;
    for(i=0;i<9;i++){
        if(x==ara[i])
        cnt++;
    }
    return cnt;
}
int main()
{
    int ara[10],i,j,max,maxindex,b,sum=0,max1=0,cnt;
    for(i=1;i<10;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>max1){
            max1=ara[i];
        }
    }
    cnt=count(ara,max1);
    if(cnt==0){
        for(i=0;i<3;i++){
            max=find_max(ara);
            maxindex=maxindx(ara,max);
             for(i=maxindex;b<2;i=i+3){
                if(i>9){
                    i=i-9;
                }
                else if(i==maxindex){
                    ara[i]=0;
                }
                else{
                    sum=ara[i]+sum;
                    ara[i]=0;
                    b++;
                }
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
