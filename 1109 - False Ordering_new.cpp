#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;



int main()
{
    int n,x,ara[1020],cnt,i,j,rt,num[1020],k=1,cas=0;
    num[0]=1;
    for(i = 2; i <= 1000; i++) {
         ara[i] = 2;
     }
     rt = sqrt(1000);
     for(i = 2; i <= rt; i++) {
             for(j =1; i * j <= 1000; j++) {
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
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        printf("Case %d: %d\n",++cas,num[x-1]);
    }


    return 0;
}
