#include<stdio.h>
int main()
{
	int n=0,i,sw=0,x,j,h,k;
	int ara[20];
	scanf("%d",&h);
	for(k=1;k<=h;k++){
            sw=5;
            n=0;
            scanf("%d",&x);
            while(x){
                ara[n]=x%10;
                n++;
                x=x/10;
            }
            j=n-1;
            n=n/2;
            for(i=0;i<n;i++,j--){
                if(ara[i]!=ara[j]){
                    sw=1;
                    break;
                }
            }
            if(sw==1){
                printf("Case %d: No\n",k);
            }
            else{
                printf("Case %d: Yes\n",k);
            }
    }
	return 0;
}
