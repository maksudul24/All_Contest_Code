#include<stdio.h>
#include<math.h>
int main()
{
        int num,inv=0,n,count=0,x;
        scanf("%d",&n);
          num=n;
        while(num>0){
          num=num/10;
            count++;
        }
        if(count%2!=0){
        inv++;
        }
        if(count>1){

                    count--;
              while(count>-1){
                        num=n%10;
                        inv=num*(pow(10,count))+inv;
                        count--;
                        n=n/10;
                    }
                    printf("%d\n",inv);
        }
        return 0;
}
