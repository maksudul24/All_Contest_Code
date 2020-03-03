#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,cas=0,len_x=0,add=0,y,num=0,j,k,len,z,x,p;
    char s[250];
    scanf("%d",&n);
    while(n--){
            add=0,len_x=0,num=0;
        scanf(" %s %d",s,&x);
        p=x;
        len=strlen(s);
        while(p){
            p=p/10;
            len_x++;
        }
        z=len_x-1;
        for(i=1;i<=len;){
                k=z;
                num=0;
            for(j=i;j<=len_x;j++){
                y=s[j-1]-48;
                num+=pow(10,k)*y;
                printf("y:%d k:%d\n",y,k);
                k--;
            }
            i+=z+1;
            len_x+=z+1;
            p=num;
            printf("num1:%d\n",p);
            while(p+add<x){
                y=s[j-1]-48;
                printf("y2:%d\n",y);
                num=num*10+y;
                i++;
                len_x++;
                j++;
                p=num;
            }
            num+=add;

            printf("num:%d\n",num);
            add=num%x;

        }
        if(add==0){
            printf("Case %d: divisible\n",++cas);
        }
        else{
            printf("Case %d: not divisible\n",++cas);
        }
    }
    return 0;
}
