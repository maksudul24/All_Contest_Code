#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,cas=0,len_x=0,add=0,y,num=0,j,k,len,x;
    char s[250];
    scanf("%d",&n);
    while(n--){
            add=0,len_x=0,num=0;
        scanf(" %s %d",s,&x);
        len=strlen(s);
        for(i=0;i<len;){
                num=0;
                j=i;

            while(1){
                if(num+add>=x) break;
                y=s[i]-48;
                num+=num*10+y;
                   printf("num:%d,y:%d,add=%d\n",num,y,add);
                i++;
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
