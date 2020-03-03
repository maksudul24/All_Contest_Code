#include<stdio.h>
int main()
{
    int i,j,k,n,rot90=0,rot180=0,rot270=0,vertical=0,same=0,vert90=0,vert180=0,vert270=0;
    char ch;
    scanf("%d",&n);
    int ara[n][n],ara2[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&ch);
            if(ch=='x'){
                ara[i][j]=1;
            }
            else{
                ara[i][j]=0;
            }
       }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&ch);
            if(ch=='x'){
                ara2[i][j]=1;
            }
            else{
                ara2[i][j]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        k=n-i-1;
        if(ara2[0][i]==ara[0][i] && ara2[1][i]==ara[1][i]){
            same++;
        }
        if(ara2[0][i]==ara[k][0] && ara2[1][i]==ara[k][1]){
            rot90++;
        }
        if(ara2[0][i]==ara[n-1][k] && ara2[1][i]==ara[n-2][k]){
            rot180++;
        }
        if(ara2[0][i]==ara[i][n-1] && ara2[1][i]==ara[i][n-2]){
            rot270++;
        }
        if(ara2[0][i]==ara[0][k] && ara2[1][i]==ara[1][k]){
            vertical++;
        }
        if(ara2[0][i]==ara[n-1][k] && ara2[1][i]==ara[n-2][k]){
            vert90++;
        }
        if(ara2[0][i]==ara[n-1][i] && ara2[1][i]==ara[n-2][i]){
            vert180++;
        }
        if(ara2[0][i]==ara[i][0] && ara2[1][i]==ara[i][1]){
            vert270++;
        }
    }
    if(same==n || rot90==n || rot180==n || rot270==n || vertical==n || vert90==n || vert180==n || vert270==n){
            if(same==n){
                printf("NO CHANGE\n");
            }
            if(rot90==n){
                printf("ROTATED 90 DEGREE\n");
            }
            if(rot180==n){
                printf("ROTATED 180 DEGREE\n");
            }
            if(rot270==n){
                printf("ROTATED 270 DEGREE\n");
            }
            if(vertical==n){
                printf("VERTICAL REFLECTION\n");
            }
            if(vert90==n){
                printf("Vertically reflected then goes 90 DEGREE\n");
            }
            if(vert180==n){
                printf("VERTICALLY REFLECTED THEN GOES 180 DEGREE\n");
            }
            if(vert270==n){
                    printf("VERTICALLY REFLECTED THEN GOES 270 DEGREE\n");
            }
    }
    else{
        printf("Invalid\n");
    }
    return 0;
}
