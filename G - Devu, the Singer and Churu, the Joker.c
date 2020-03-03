#include<stdio.h>
int main()
{
    int n,d,cnt=0,rem,temp,i,x;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        cnt+=x;
    }
    temp=(n-1)*10+cnt;

    if(temp>d){
        x=-1;
        printf("%d\n",x);

    }
    else{
            x=d-cnt;
            x=x/5;
            printf("%d\n",x);
    }
    return 0;
}
