#include<stdio.h>
#include<string.h>
int main()
{
        int i,len,sw=0,count=0,sw1=0,max=0;
        char ara[5020];
        scanf("%s",ara);
        len=strlen(ara);
        for(i=0;i<len;i++){
            if(ara[i]=='a' && sw1<3){
                if(sw==0){
                    sw1++;
                }
                    count++;
                    sw=1;
            }
            else if(ara[i]=='b' && sw1<3){
               if(sw==1){
                sw1++;
               }
               sw=1;
                count++;
            }
            else{
                if(count>max){
                    max=count;
                }
                count=0;
                sw1=0;
                sw=0;
            }
        }
        printf("%d\n",max);
        return 0;
}
