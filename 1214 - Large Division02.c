#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,cas=0,len_x=0,add=0,y,num=0,j,k,len,x;
    char s[500];
    scanf("%d",&n);
    while(n--){
            add=0,len_x=0,num=0;
        scanf(" %s %d",s,&x);
        if(x<0){
            x=x*(-1);
        }
        len=strlen(s);
        if(s[0]=='-'){
                 i=1;
        }
        else{
            i=0;
        }
        for(;i<len;){
                num=0;
            while(num<x){
                y=s[i]-48;
                num=num*10+y;
                i++;
                if(i>=len) break;
            }
            num+=add;
            num=num%x;

        }
        if(num==0){
            printf("Case %d: divisible\n",++cas);
        }
        else{
            printf("Case %d: not divisible\n",++cas);
        }
    }
    return 0;
}
