#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int len,swtch,i;
     len=sqrt(n);
    for(i=len;i>1;i--){
        if(n%i==0){
          swtch=1;
          break;
          }
        else{
            swtch=0;
        }
    }
    if(swtch==0){
        return 1;
    }
    else{
        return 0;
    }
}

int test(int n)
{
    int x,inv=0,count=0,num;
    x=prime(n);
    if(x==0){
        return 3;
    }
    else{
        num=n;
        while(num>0){
          num=num/10;
          count++;
        }
        if(count%2!=0){
            inv++;
        }
        if(count==1){
            return 2;
        }
        count--;
        while(count>-1){
            num=n%10;
            inv=num*(pow(10,count))+inv;
            count--;
            n=n/10;
        }
        x=prime(inv);
        if(x==1){
            return 1;
        }
        else if(x==0){
            return 2;
        }
    }
}





int main()
{
    int n,x;
    scanf("%d",&n);
    x=test(n);
    if(n==2 || n==3){
        x=2;
    }
    if(x==1){
        printf("%d is emrip\n",n);
    }
    if(x==2){
        printf("%d is prime\n",n);
    }
    if(x==3){
        printf("%d is not prime\n",n);
    }
    return 0;
}
