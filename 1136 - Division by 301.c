#include<stdio.h>
int main()
{
    int A,B,x,y,limit,n,i=0,z;
    long long int j;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&A,&B);
       limit=B-A;
       if(limit>3){
            x=A%3;
            y=B%3;
            if(x){
                z=x-1;
            }
            else z=0;
            limit=limit+z-y+1;
            limit=(limit/3)*2;
            if(y==2){
                limit++;
            }
            if(x==0){
                limit++;
            }
       }
       else{
            limit=0;
            for(j=A;j<=B;j++){
                 if((j*(j+1))%6==0){
                        limit++;
                 }
              }
       }
        printf("Case %d: %d\n",++i,limit);
    }
    return 0;
}
