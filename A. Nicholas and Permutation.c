#include<stdio.h>
int main()
{
    int n,x,min_v,max_v,pos_max=1,pos_min=1,dis,i,y;
    scanf("%d",&n);
    scanf("%d",&x);
    min_v=x;
    max_v=x;
    for(i=2;i<=n;i++){
        scanf("%d",&x);
        if(x>max_v){
            max_v=x;
            pos_max=i;
        }
        else if(x<min_v){
            min_v=x;
            pos_min=i;
        }
    }
    x=n-pos_min;
    pos_min--;
    if(x<pos_min) x=pos_min;
    y=n-pos_max;
    pos_max--;
    if(y<pos_max) y=pos_max;
    if(x>y) dis=x;
    else dis=y;
    printf("%d\n",dis);
}
