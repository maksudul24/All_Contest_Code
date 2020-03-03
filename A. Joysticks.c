#include<stdio.h>
int main()
{
    int x,y,add=0,temp;
    scanf("%d %d",&x,&y);
    if(y>x){
        temp=x;
        x=y;
        y=temp;
    }
    while(1){
        if(x%2!=0){
            add+=x/2;
            y+=x/2;
            x=x%2;
        }
        else{
            x=x-2;
            add+=x/2;
            y+=x/2;
            x=2;
        }
        if(y>x){
            temp=x;
            x=y;
            y=temp;
        }
        if(x==0 || y==0){
            break;
        }
        else if(x==2){
            add++;
            break;
        }
        else if(x==1){
            break;
        }
    }
    printf("%d\n",add);
    return 0;
}
