#include<stdio.h>
int main()
{
	int m,n,i,j,x,count=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			x=m+n;
			if(x%5==0){
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
