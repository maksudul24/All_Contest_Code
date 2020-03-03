#include<stdio.h>
int main(){
    int k,n,w,ans,i,m;
    scanf("%d %d %d",&k,&n,&w);
    ans=0;
    if(k>=1 && w<=1000 && n>= 0 && n<=10^9){
    for(i=1;i<=w;i++){
        ans=k*i+ans;
    }
    m=ans-n;
    if(m>0){
    printf("%d\n",m);
    }
    else{
        printf("0");
    }
    }
    return 0;
}
