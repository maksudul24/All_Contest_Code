#include<stdio.h>
int main()
{
        int tri[3],i,position,add=0,max=0;
        while(1){
                max=0;
                add=0;
                for(i=0;i<3;i++){
                    scanf("%d",&tri[i]);
                    if(tri[i]>max){
                        max=tri[i];
                        position=i;
                    }
                }
                if(tri[0]==0 && tri[1]==0 &&tri[2]==0){
                    break;

                }
                for(i=0;i<3;i++){

                    if(i!=position){
                        add=tri[i]*tri[i]+add;
                    }
                }
                if(add==(tri[position]*tri[position])){
                    printf("right\n");
                }
                else{
                    printf("wrong\n");
                }
        }
    return 0;
}
