#include<stdio.h>
#include<string.h>
int main()
{

    int i,limit,n,x,cas=0;
    char ara[120][60],ch[60];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        strcpy(ara[0],"http://www.lightoj.com/");
        printf("Case %d:\n",++cas);
        x=0;
        limit=x;
        while(1){
            scanf("%s",ch);
            if(strcmp("VISIT",ch)==0){
                x++;
                scanf(" %s",ara[x]);
                limit=x;
            }
            else if(strcmp("FORWARD",ch)==0){
                x++;

            }
            else if(strcmp("BACK",ch)==0){
                x--;
            }
            else{
                memset(ch,'\0',sizeof(ch));
                break;
            }
            if(x>limit){
                x--;
                printf("Ignored\n");
            }
            else if(x<0){
                x++;
                printf("Ignored\n");
            }
            else{
               printf("%s\n",ara[x]);
            }
             memset(ch,'\0',sizeof(ch));
      }
   }
   return 0;
}
