#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i,j,k,a,n,t,item[100],cnt;
    while(scanf("%d",&a)==1){
        for(k=1;k<=a;k++){
            cnt=0;
            scanf("%d",&n);
            for(i=0;i<n;i++) scanf("%d",&item[i]);

            for(i=1;i<n;i++){
                for(j=n-1;j>=i;j--){
                    if(item[j-1]>item[j]){
                        cnt++;
                        t=item[j-1];
                        item[j-1]=item[j];
                        item[j]=t;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",cnt);
        }
    }
    return 0;
}
