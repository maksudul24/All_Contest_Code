#include<stdio.h>
#include<iostream>
using namespace std;
int fact[40],j=0;
unsigned long long int x,ara[30];
void call_test(unsigned long long int n)
{
    static int i=1;
    int y;
    n=n*i;
    if(x<n){
        return;
    }
    ara[i]=n;
    i++;
    call_test(n);
    i--;
    if(ara[i]<=x){
        x=x-ara[i];
        fact[j]=i;
        j++;
    }
}
int main()
{
    int i,n,d=0,h=0,sw=0,k=1;
    long long int add,test;
    ara[0]=1;
    scanf("%d",&n);
    while(n--){
            add=1,h=0,j=0,sw=0,k=1;
        cin>>x;
        call_test(1);

        printf("Case %d: ",++d);
        if(x==0){
            for(i=j-1;i>=0;i--){
                printf("%d!",fact[i]);
                if(i){
                    printf("+");
                }

            }
            cout<<endl;
        }
        else if(x==1){
                fact[j]=0;
                for(i=j;i>=0;i--){
                printf("%d!",fact[i]);
                if(i){
                    printf("+");
                }

            }
            cout<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}
