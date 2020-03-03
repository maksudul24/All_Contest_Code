#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sw,l,l2;
    char ara1[1000],ara2[50];
    printf("Enter a sentence:\n");
    gets(ara1);
    for(i=1;ara1[i]!='\0';i++);
    l=i;
    printf("Enter the word to search:\n");
    gets(ara2);
    for(i=1;ara2[i]!='\0';i++);
    l2=i;
    for(i=0;i<l;i++){
        sw=0;
        for(j=0;j<l2;j++){
            if(ara1[i+j]==ara2[j]){
                sw=1;
            }
            else{
                sw=0;
            }
        }
        if(sw==1){
            printf("%s started from position %d\n",ara2,i+1);
        }
    }
    return 0;
}
