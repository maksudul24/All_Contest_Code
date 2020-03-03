#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int sw,i,j,n,temp,cnt=0;
  //  freopen("in.txt","r",stdin);
    scanf("%d",&n);
    if(n%2==0){
        printf("%d\n",(n*n)/2);
        sw=0;
        for(i=0;i<n;i++){
                if(sw==1) sw=0;
                else sw=1;
            for(j=0;j<n;j++){
                if(sw==1){
                        sw=0;
                        printf("C");
                        cnt++;
                }
                else{
                    sw=1;
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    else{
            sw=1;
        temp=n/2;
        printf("%d\n",((temp+1)*(temp+1))+(temp*temp));
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(sw==1){
                    printf("C");
                    cnt++;
                    sw=0;
                }
                else{
                    printf(".");
                    sw=1;
                }
            }
            printf("\n");
        }
    }
    return 0;
}


