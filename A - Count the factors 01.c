#include<stdio.h>
#include<math.h>
int cnt=0;
void count(int n)
{
    int x;
    x=n%10;
    if(x==2 || x==3 || x==5 || x==7){
        cnt++;
    }
    else if(n==0){
        return;
    }
    count(n/10);
}
 int main()
 {
     int n,x;
     while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        count(n);
        x=cnt;
        cnt=0;
        printf("%d : %d\n",n,x);
     }
 }

