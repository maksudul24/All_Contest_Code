#include<stdio.h>

int count;

void binary(int x)
{
    if(x==0){
        return;
    }
    binary(x/2);
    if(x%2==1){
    	count++;
    }
    	
}

int main()
{
    int a,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	count=0;
        scanf("%d",&a);
        binary(a);
        if(count%2==0){
           printf("Case %d: even\n",i);
        }
        else{
           printf("Case %d: odd\n",i);
        }
    }
    return 0;
}
