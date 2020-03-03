#include<stdio.h>
#include<string.h>
int main()
{
    int num_a=0,num_b=0,past_a=0,past_b=0,i,n,max=0,temp,sw1=1,sw2=1,total_a=0,total_b=0;
    char ara[5050];
    scanf("%s",ara);
    n=strlen(ara);
    for(i=0;i<n;i++){
        if(ara[i]=='a'){
            num_a++;
            total_a++;
            if(sw1==1){
                past_b=num_b;
                num_b=0;
                sw1=0;
                sw2=1;
            }
                temp=num_a+past_a+past_b;
                if(temp>max){
                    max=temp;
                }


        }
        else{
            total_b++;
            if(sw2==1){
                past_a=num_a;
                num_a=0;
                sw1=1;
                sw2=0;
            }
            num_b++;
        }
    }
    if(total_a>total_b){
        if(total_a>max){
            max=total_a;
        }
    }
    else{
        if(total_b>max){
            max=total_b;
        }
    }

    printf("%d\n",max);
    return 0;
}
