#include<stdio.h>
int main()
{
    int money[50000],n,i,l=0,j,sw1=0,sw2=0,sw3=0,local1,taka,cash,bal,create=0;
    char name[5000][100],pass[5000][100],name2[100],pass2[100],test_password[100];
    while(1){
        if(name[create-1]=='\0' || pass[create-1]=='\0'){
            break;
        }
        printf("Enter your name:");
        scanf("%s",name[create]);
        printf("\n");
        printf("Enter a password:");
        scanf("%s",pass[create]);
        printf("\n");
        printf("Renter Your password:");
        scanf("%s",&test_password);
        l=strcmp(test_password,pass);
        if(l==0){
            printf("Welcome to our banking service you have successfully created your id\n");
            printf("Log in with your user id and password\n");
            create++;
            l=1;
        }
        else{
            printf("Passwords you entered are not same\n");
            printf("Please re-enter your password carefully\n");
            name[create][100]='\0';
            pass[create][100]='\0';
        }
    }
    printf("INFORMATION OF CLIENTS:\n");
    for(i=0;i<create-1;i++){
        printf("User name:%s,Password:%s\n",name[i],pass[i]);
    }
}
