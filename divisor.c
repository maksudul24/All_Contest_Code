#include<stdio.h>
vector<int> divisor[10000002];

void fun(int n)
{
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j+=i){
            divisor[j].push.back[i];
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("The divisor of %d\n",n);
    fun(n);
    for(i=0;i<100000;i++)
    printf("%d ",divisor[i].size());
}
