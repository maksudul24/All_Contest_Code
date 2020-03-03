#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;



int main()
{
    int n,x,ara[1020],cnt,i,j,rt,num[1020],k=1;
    num[0]=1;
    for(i = 2; i <= 1000; i++) {
         ara[i] = 2;
     }
     rt = sqrt(1000);
     for(i = 2; i <= rt; i++) {
             for(j = 1; i * j <= 1000; j++) {
                 ara[i * j]++;

         }
     }
     for(i=2;i<=18;i++){
        for(j=1000;j>=2;j--){
            if(ara[j]==i){
                num[k]=j;
                k++;
            }
        }
     }
     for(i=1;i<=1000;i++){
        printf("%d: %d ",i,ara[i]);
     }
     printf("\nSerial: ");
    for(i=0;i<k;i++){
        printf("%d:%d ",i+1,num[i]);
        if(i%50==0 && i!=0){
            printf("\n");
        }

    }



    return 0;
}
