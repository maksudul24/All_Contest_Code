#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int hou_len(char s[])
{
    int i;
    for(i=1;s[i]!=':';i++);
    i=i+1;
    return i;
}

int min_len(char s[])
{
    int i,sw=0,count=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==':'){
            sw=1;
        }
        if(sw==1){
            count++;
        }
    }
    count=count-1;
    return count;
}


int main()
{
        int h,m,num=0,power,i,len,len2,n,lol;
            double x;
            char tim[10],*p,*q;
        while(1){
                num=0;
            scanf("%s",tim);
            h=strtol(tim,&q,10);
            len=min_len(tim);
            power=len-1;
            len2=hou_len(tim);
            len=len2+len;
            for(i=len2;i<len;i++){
                    num=((tim[i]-'0')*pow(10,power))+num;
                    power--;
            }
            m=num;
            if(h==0 && m==0){
                break;
            }

            x=(h*30)+((30*m)/60)-(m*6);
            if(x>180){
                x=360-x;
            }
            printf("%0.3lf\n",x);
        }

        return 0;
}
