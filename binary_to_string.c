#include<stdio.h>
int main()
{
    int a,i=0,j,k;
    char stri[80],temp;
    scanf("%d",&a);
    while(1){
        if(a%2==0){
            stri[i]='0';
        }
        else{
            stri[i]='1';
        }
        a=a/2;
        if(a==0){
            stri[i+1]='0'+a;
            printf("%c\n",stri[i+1]);
            break;
        }
        i++;
    }
    for(j=0,k=i;j<=i/2;j++,k--){

        temp=stri[j];
        stri[j]=stri[k];
        stri[k]=temp;
    }
    printf("%s\n",stri);
    return 0;
}
