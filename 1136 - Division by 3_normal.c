#include<stdio.h>
int main()
{
    int A,B,x,y,limit,n,i=0,j,z=0;
    scanf("%d",&n);
    while(n--){
            z=0;
        scanf("%d %d",&A,&B);
       limit=B-A;
       if(limit){
            for(j=A;j<=B;j++){
                if((j*(j+1))%6==0){
                    z++;
                }
            }
       }
        printf("Case %d: %d\n",++i,z);
    }
    return 0;
}
