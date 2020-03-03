#include<stdio.h>
int main()
{
    int i,j,n,k,add=0,cnt=0,x,ara[501];
    scanf("%d %d",&n,&k);
    scanf("%d",&ara[0]);
    for(i=1;i<n;i++){
        scanf("%d",&ara[i]);
        x=ara[i]+ara[i-1];
        if(x<k){
            cnt=k-x;
            ara[i]+=cnt;
            add+=cnt;
        }
    }
  /*  if(n==1){
        x=k-ara[0];
        if(x>0){
         add=k-ara[0];
         ara[0]+=add;
        }
    } */
    printf("%d\n",add);
    for(i=0;i<n;i++){
      printf("%d",ara[i]);
      if(i!=n-1){
        printf(" ");
      }
    }
    return 0;
}
