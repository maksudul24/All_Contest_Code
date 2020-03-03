#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,l2,sw=0;
    char id2[100],pass2[100];
    char id[]={'R','a','b','a','t','\0'};
    char pass[]={'1','2','3','4','5','\0'};
    printf("Enter user  ID:");
    gets(id2);
    printf("Password:");
    gets(pass2);
    l=strlen(id);
    l2=strlen(pass);
    for(i=0l;i<l;i++){
      if(id[i]==id2[i] && pass[i]==pass2[i]){
        sw=1;
        }
    }
    if(sw==1){
        printf("You a have succesfully created an id\n");

    }
    else{
        printf("Invalid user id or password\n");
    }
    return 0;
}
