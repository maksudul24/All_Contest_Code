#include<stdio.h>

int test(int n)
{
    int cnt=0;
    while(n==1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(3*n)+1;
        }
        cnt++;
    }
    return cnt;
}

int main()
{

    int n,max=0,i,a,b,x;
 //   scanf("%d",&n);
 //   for(i=0;i<n;i++){

    scanf("%d %d",&a,&b);
    while(a<=b){
        x=test(a);
        if(x>max){
            max=x;
        }
        a++;

    }
    printf("%d\n",max);


 //   }
    return 0;
}
