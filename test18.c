#include<stdio.h>
int ara[100][100];
int i,j=0;
void binary(int x)
{
    if(x==0){
        return;
    }
    binary(x/2);
    ara[i][j]=x%2;
    j++;
}

int main()
{
    int a;
    printf("Enter 0 to exit\n");

        scanf("%d",&a);
        binary(a);
        printf("%s\n",ara[0][0]);

    return 0;
}
