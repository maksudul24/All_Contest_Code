#include<stdio.h>
#include<iostream>
#define inf 1000000
using namespace std;
int main()
{
    int ara[10][100][100],i,j,p,k,n,ans[100][100],min_v=inf+500;
    printf("Enter the NUmber of Node\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&ara[0][i][j]);
            if(ara[0][i][j]==0) ara[0][i][j]=inf;
        }
    }
    for(k=1;k<=n;k++){
            printf("Q:%d\n",k);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                ara[k][i][j]=min(ara[k-1][i][j],ara[k-1][i][k]+ara[k-1][k][j]);
                if(ara[k][i][j]<min_v) min_v=ara[k][i][j];
                if(ara[k][i][j]<inf)  printf("%d ",ara[k][i][j]);
                else printf("inf ");
            }
            printf("\n");
        }
    }
    printf("shortest path:%d\n",min_v);
    return 0;
}
