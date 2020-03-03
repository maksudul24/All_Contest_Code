#include<stdio.h>
int main()
{
    int ara[10][100][100],i,j,p,k,n,ans[100][100];
    printf("Enter the NUmber of Node\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            scanf("%d",&ara[0][i][j]);
            ans[i][j]=ara[0][i][j];
        }
    for(p=1;p<n;p++){
            printf("A^%d:\n",p+1);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    ara[p][i][j]+=ara[p-1][i][k]*ara[0][k][j];
                }
                ans[i][j]+=ara[p][i][j];
                printf("%d ",ara[p][i][j]);
            }
            printf("\n");
        }
    }
    printf("Path Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
