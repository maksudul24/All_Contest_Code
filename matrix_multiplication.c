#include<stdio.h>
int main()
{
    int m,n,a,b,
    printf("A x B:");
    scanf("%d %d",&a,&b);
    printf("M x N:");
    scanf("%d %d",&m,&n);
    if(n!=b){
        printf("Error Matrix Formation\n");
    }
    else{
        int mul[a][n],amat[a][b],bmat[m][n];
        printf("Enter A x B matrix's substitution:\n");
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                printf("a%d%d:",i+1,j+1);
                scanf("%d",&amat[i][j]);
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        printf("Enter M x N matrix's Substitution:\n");
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    printf("m%d%d:");
                    scanf("%d",&bmat[i][j]);
                    printf(" ");
                }
            printf("\n");
        }
        for(i=0;i<a;i++){
                for(j=0;j<n;j++){
                        mul[i][j]=0;
                        for(k=0;k<n;k++){
                                mul[i][j]+=amat[k][]*bmat[j][i];
                        }

                }
        }

    }
