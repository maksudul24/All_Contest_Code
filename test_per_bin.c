
#include<stdio.h>
#include<math.h>
int p_ara[25],cnt,n_ara[25],n_cnt;
void binary(int n)
{
    if(n_cnt==0) return;
    n_cnt--;
    binary(n/2);
    if(n%2==1) cnt++;
    else cnt--;
}
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    temp=n;
    n=pow(2,n);
    for(i=0;i<n;i++){
        cnt=0;
        n_cnt=temp;
        binary(i);
        if(cnt>=0){
            p_ara[cnt]++;
        }
        else{
            cnt=cnt*-1;
            n_ara[cnt]++;
        }
    }
    printf("the combination for %d is\n",temp);
    for(i=0;i<=10;i++){
        if(p_ara[i]!=0) printf("%d is %d,",i,p_ara[i]);
        if(n_ara[i]!=0) printf("-%d is %d,",i,n_ara[i]);
    }
    printf("\n");
    return 0;

}
