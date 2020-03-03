#include<stdio.h>
int main()
{
    int n,i,max=0,j,count=0,sum=0,mul=0,temp;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        mul=ara[i]+mul;
    }
    mul=mul/2;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(ara[j]>max){
                temp=ara[i];
                max=ara[j];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        count++;
        sum=ara[i]+sum;
        if(sum>mul){
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}

