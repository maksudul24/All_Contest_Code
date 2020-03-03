#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
      if(x!=0 & y!=0){
        x=x-y;
        if(x<0){
            x=x*(-1);
        }
        if(x==0 || x==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
      }
      else{
        if(x==0 && y==0){
            printf("NO\n");
        }
        else if(x==0 && y==1){
            printf("YES\n");
        }
        else if(x==1 && y==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
      }
    return 0;
}
