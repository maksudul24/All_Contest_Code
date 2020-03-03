#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,len,len2;
    char line1[100],line2[100],temp;
    scanf("%s",line1);
    scanf("%s",line2);
    len=strlen(line1);
    len2=strlen(line2);
    if(len==len2){
            if(len%2!=0){
                n=len/2+1;
            }
            else{
                n=len/2;
                }
            for(i=0,j=len-1;i<n;i++,j--){
                temp=line1[i];
                line1[i]=line1[j];
                line1[j]=temp;
            }
            if(strcmp(line1,line2)==0){
                printf("YES");
            }
            else{
                printf("NO\n");
            }
    }
    else{
        printf("NO\n");
    }
    return 0;
}
