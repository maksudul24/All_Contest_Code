#include<stdio.h>
int main()
{
    int i,j,m,n,x=1;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        switch (x)
        {
                case 1:
                    for(j=0;j<m;j++){
                            printf("#");
                       }
                    x=2;
                    break;
                case 2:
                        for(j=1;j<=m;j++){
                                if(j==m){
                                    printf("#");
                                }
                                else{
                                    printf(".");
                                }
                    }
                    x=3;
                    break;
                case 3:
                    for(j=0;j<m;j++){
                            printf("#");
                    }
                    x=4;
                    break;

                case 4:
                    for(j=0;j<m;j++){
                                if(j==0){
                                    printf("#");
                                }
                                else{
                                    printf(".");
                                }
                        }
                    x=1;
                break;
        }
        printf("\n");
    }
    return 0;
}
