#include<stdio.h>
#include<string.h>
int cash_in(int n,int m)
{
    int x;
    x=m+n;
    return x;
}
int cash_out(int m,int n)
{
    int x;
    x=m-n;
    return x;
}
int main()
{
        int n,i,l=0,j,sw1=0,sw2=0,sw3=0,local1,taka,cash,bal;
        char name2[100],pass2[100],test_password[100];
        char name[10][100]={"Maksudul","Rabat","Sakib","Nazmul","Mamun","Jesan","safqat","Mahbub","shuvo","nadim"};
        char pass[10][100]={"123","rabat","456","rakib","567","890","2200","1200","ru_cse","mairala"};
        int money[10]={1000,50000,600,50,2000,30000,1200000,56004,120,6};
        printf("Enter user  ID:");
        scanf("%s",name2);
        for(j=0;j<10;j++){
            if(0==strcmp(name[j],name2)){
                    sw1=1;
                    local1=j;
                    break;
            }
        }
        if(sw1==1){
            printf("Password:");
            scanf("%s",pass2);
            if(0==strcmp(pass[local1],pass2)){
                while(1){
                    printf("Name:%s\n",name[local1]);
                    printf("Account no:%p\n",&money[local1]);
                    bal=money[local1];
                    printf("Balance: %d Taka\n",bal);
                    printf("\n");
                    printf("To Cash in press 1\n");
                    printf("To cash out press 2\n");
                    printf("To exit press 0\n");
                    scanf(" %d",&sw3);
                    if(sw3==0){
                        break;
                    }
                    if(sw3==1){
                        printf("Enter amount:");
                        scanf(" %d",&taka);
                        money[local1]=cash_in(taka,money[local1]);
                    }
                    if(sw3==2){
                        printf("Enter amount:");
                        scanf(" %d",&taka);
                        if(money[local1]>=taka){
                            money[local1]=cash_out(money[local1],taka);
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
        return 0;
}
