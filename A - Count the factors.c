#include<stdio.h>
#include<math.h>
int is_prime(int n);
int count(int n){
    int cnt=0,x;
    while(n){
        x=n%10;
        x=is_prime(x);
        if(x==1){
            cnt++;
        }
        n=n/10;
    }
    return cnt;

}
 int is_prime(int n)
 {
     int i,root;
     if (n < 2) {
         return 0;
     }
    else if(n == 2) {
         return 1;
     }
     else if(n % 2 == 0) {
         return 0;
     }
     root=sqrt(n);
     for(i = 2; i <= root; i++) {
         if(n % i == 0) {
             return 0;
         }
     }
     return 1;
 }
 int main()
 {
     int n,x;
     while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        x=count(n);
        printf("%d : %d\n",n,x);
     }
 }

