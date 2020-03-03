#include<stdio.h>
#include<math.h>
#include<string.h>
int cnt=0;
int ara[15];
void count(int n)
{   int x;
    if(n==0){
        return;
    }
    x=n%10;
    if(ara[x]!=1){
        cnt++;
        ara[x]=1;
    }
    count(n/10);
}
 int main()
 {
     int n,x,i;
     while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        count(n);
        x=cnt;
        cnt=0;
        memset(ara,0,sizeof(ara));
        printf("%d : %d\n",n,x);
     }
 }

