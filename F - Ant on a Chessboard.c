#include<stdio.h>
int main()
{
    int x,y,sw,n,tm,sw2;
    while(1){
            x=2,y=2,sw=4,n=2,tm,sw2=0;
            scanf("%d",&tm);
            if(tm==0){
                break;
            }
            if(tm==1){
                x=1;
                y=1;
            }
            else if(tm==2){
                x=1;
                y=2;
            }
            else if(tm==3){
                x=2;
                y=2;
            }
            else if(tm==4){
                x=2;
                y=1;
            }
            else{
                    tm=tm-4;
                while(tm>=0){
                        tm--;
                    if(sw==1){
                        x++;
                        if(x==n){
                            sw=4;
                        }
                    }
                    else if(sw==2){
                        if(sw2==0) x--;
                        if(x==1){
                            sw2++;
                        }
                        if(sw2==2){
                            y++;
                            n=y;
                            sw=1;
                            sw2=0;
                        }
                    }
                    else if(sw==3){
                        y++;
                        if(y==n){
                            sw=2;
                        }
                    }
                    else if(sw==4){
                        if(sw2==0) y--;
                        if(y==1){
                            sw2++;
                        }
                        if(sw2==2){

                            x++;
                            n=x;
                            sw=3;
                            sw2=0;
                        }
                    }
                }
            }
            printf("%d %d\n",x,y);
    }
    return 0;
}
