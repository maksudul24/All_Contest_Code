#include<stdio.h>
#include<string.h>
int create;
int main()
{
    int money[50000],n,i,l=0,j,sw1=0,sw2=0,sw3=0,local1,taka,cash,bal;
    char name[5000][100],pass[5000][100],name2[100],pass2[100],test_password[100];
    printf("Enter 1 to creat account\n");
    printf("Enter 2 to Log in\n");
    scanf("%d",&n);
    if(n==1){
        printf("Enter your name:");
        gets(name[create]);
        printf("\n");
        printf("Enter a password:");
        gets(pass[create]);
        printf("\n");
        printf("Renter Your password:");
        gets(test_password);
        l=strcmp(test_password,pass);
        if(l==1){
            printf("Welcome to our banking service you have successfully created your id\n");
            printf("Log in with your user id and password\n");
            create++;
        }
        else{
            printf("Passwords you entered are not same\n");
            printf("Please re-enter your password carefully\n");
            name[create][100]='\0';
            pass[create][100]='\0';
        }
    }
    else if(n==2){
            printf("Enter user  ID:");
            scanf("%s",name2);
            for(j=0;j<l;j++){
                if(0==strcmp(name[j],name2)){
                        sw1=1;
                        local1=j;
                }
            }
            if(sw2==1){
                printf("Password:");
                scanf(pass2);
                if(0==strcmp(pass[j],pass2)){
                    while(1){
                        bal=money[local1];
                        printf("Balance: %d Taka\n",bal);
                        printf("\n");
                        printf("To Cash in press 1\n");
                        printf("To cash out press 2\n");
                        printf("To exit press 0\n");
                        scanf(" %d",sw3);
                        if(sw3==0){
                            break;
                        }
                        if(sw3==1){
                            printf("Enter amount:");
                            scanf(" %d",&taka);
                            money[local1]=taka+money[local1];
                        }
                        if(sw3==2){
                            printf("Enter amount:");
                            scanf(" %d",taka);
                            if(money[local1]>=taka){
                                money[local1]=money[local1]-taka;
                            }
                            else{
                                printf("Sorry You don't have enough balance\n");
                            }
                        }
                    }
                }
            }
            else{
                printf("Wrong Password or User id\n");
            }
    }
    else{
        printf("Invalid selection\n");
    }
    return 0;
}
