#include<stdio.h>
int main()
{
        int h,m,num=0,power,i,len,len2,n,lol;
            double x;
        while(1){
            scanf(" %d",&h);
            printf(":");
            scanf(" %d",&m);
            if(h==0 && m==0){
                break;
            }

            x=(h*30)+((30*m)/60)-(m*6);
            if(x>180){
                x=360-x;
            }
            printf("%0.3lf\n",x);
        }

        return 0;
}
