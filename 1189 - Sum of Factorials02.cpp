#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,n,fact[40],d=0,h=0,j,sw=0,k=1;
    unsigned long long int ara[30],add,x,test=0;
    ara[0]=1;
    scanf("%d",&n);
    while(n--){
            add=1,h=0,j,sw=0,k=1,test=0;
        cin>>x;
        for(i=1;;i++){
            add=add*i;
            test+=add;
            if(add>x){
                break;
            }
            test+=add;
            ara[k]=add;
            k++;
        }
      // if(x<=test){
                for(j=k-1;j>=0;j--){
                    if(x>=ara[j]){
                        x=x-ara[j];
                        fact[h]=j;
                        h++;
                    }

                    if(x==0){
                        sw=1;
                        break;

                }
            }
      //  }
        printf("Case %d: ",++d);
        if(sw==1){
            for(i=h-1;i>=0;i--){
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
