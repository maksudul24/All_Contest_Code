#include <iostream>
#include<cstdio>
#include<cstring>
#define SIZE 100000
using namespace std;

int main()
{
    int i,j,cnt=0,len,n=0;
    char ara[SIZE],ans[100];
    bool sw;
//    FI,FO;
    while(gets(ara)){
        len=strlen(ara);
        for(i=0;i<len;i++){
            if(ara[i]==' '){
                if(cnt>0){
                    if(n>cnt) printf(" ");
                    sw=true;
                    printf("%s",ans);
                    memset(ans,'\0',sizeof(ans));
                    cnt=0;
                    n++;
                }

            }
            else if(ara[i]=='<'){
                if(ara[i+1]=='b' && ara[i+2]=='r' && ara[i+3]=='>'){
                    printf("%s\n",ans);
                    sw=false;
                    memset(ans,'\0',sizeof(ans));
                    cnt=0;
                    i=i+3;
                    n=0;
                }
                else if(ara[i+1]=='h' && ara[i+2]=='r' && ara[i+3]=='>'){
                    if(n>0){
                        printf("%s\n",ans);
                        sw=false;
                    }
                     memset(ans,'\0',sizeof(ans));
                    cnt=0;
                    i=i+3;
                    n=0;
                    for(j=0;j<80;j++){
                        printf("-");
                    }
                    printf("\n");
                }
                else{
                    ans[cnt]=ara[i];
                    cnt++;
                    n++;
                }
            }
            else{
                    ans[cnt]=ara[i];
                    cnt++;
                    n++;
            }
            if(n==80){
                printf("\n");
                sw=false;
                n=0;
            }

        }
        if(cnt>0){
             if(n>cnt) printf(" ");
            printf("%s",ans);
            sw=true;
             memset(ans,'\0',sizeof(ans));
            cnt=0;
            n++;
            if(n==80){
                printf("\n");
                sw=false;
                n=0;
            }
        }
    }
    if(sw) printf("\n");
    return 0;
}
