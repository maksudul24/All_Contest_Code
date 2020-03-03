#include<stdio.h>
int main()
{
    int n,swg=0,swc=0,day=0,x,i,sw=5;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x==0){
            day++;
            swc=0;
            swg=0;
            sw=0;
        }
        else if(x==1){
            if(swc==1){
                day++;
                swc=0;
                swg=0;
                sw=0;
            }
            else{
                swg=0;
                swc=1;
                sw=1;
            }
        }
        else if(x==2){
            if(swg==1){
                day++;
                swg=0;
                swc=0;
                sw=0;
            }
            else{
                swg=1;
                swc=0;
                sw=1;
            }
        }
        else if(x==3 && sw==1){
            if(swc==1){
                swg=1;
                swc=0;
            }
            else{
                swg=0;
                swc=1;
            }
        }
    }
    printf("%d\n",day);
    return 0;
}
