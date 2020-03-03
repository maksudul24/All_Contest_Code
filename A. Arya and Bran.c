#include<stdio.h>
int main()
{
    int x,n,target,day=0,cal,carry=0,i,temp,days,sw=1;
    scanf("%d %d",&n,&target);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(sw==1){
                if(x>8){
                    carry+=x-8;
                    day++;
                    target=target-8;
                }
                else{
                    temp=8-x;

                    if(carry-temp>=0){
                        target=target-(temp+x);
                        carry=carry-temp;
                        day++;
                    }
                    else if((carry+x)<=8){
                        target=target-(x+carry);
                        carry=0;
                        day++;
                    }
                    else {
                        target=target-x;
                        day++;
                    }
                }
                if(target<=0){
                    sw=0;
                    days=day;
                }
            }
    }
    if(target>0){
        x=-1;
        printf("%d\n",x);
    }
    else{
        printf("%d\n",days);
    }
    return 0;
}
