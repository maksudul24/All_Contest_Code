#include<iostream>
#include<cstdio>
#include<cstring>
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)

using namespace std;
int main()
{
    int cnt=0;
    char ara[100];
    bool sw=false;
    FI,FO;
    while(scanf("%s",ara)==1){
        if(strcmp(ara,"<br>")==0){
            printf("\n");
            sw=false;
            cnt=0;
        }
        else if(strcmp(ara,"<hr>")==0){
            if(sw) printf("\n");
            printf("--------------------------------------------------------------------------------\n");
            cnt=0;
            sw=false;
        }
        else{
            cnt+=strlen(ara);
            if(sw) cnt++;
            if(cnt>80){
                cout<<endl;
                sw=false;
                cnt=strlen(ara);
            }
            else if(cnt==80){
                cout<<endl;
                cnt=0;
                sw=false;
            }
            else if(sw) printf(" ");
            printf("%s",ara);
            sw=true;
        }
    }
    if(sw) cout<<endl;
}
