#include<stdio.h>
int main()
{
    int a,b,trn,rtrn;
    while(1){
            scanf("%d",&a);
            scanf("%d",&b);
            if(a==-1 && b==-1){
                break;
            }
            if(a>b){
                trn=a-b;
                rtrn=100-a+b;
            }
            else{
                trn=b-a;
                rtrn=100-b+a;
            }
            if(trn<rtrn){
                printf("%d\n",trn);
            }
            else{
                printf("%d\n",rtrn);
            }
    }
    return 0;
}
