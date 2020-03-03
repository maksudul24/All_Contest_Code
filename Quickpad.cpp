#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
using namespace std;

int main()
{
    int i,j,n,cmd,pos=0,length,num;
    char ara[1000000],line[10],temp,ext,new_temp,sw;
  //  freopen("in.txt","r",stdin);
    scanf("%d %s",&n,&ara);
    pos=strlen(ara);
    ara[pos]='\0';
    for(i=0;i<n;i++){
        scanf("%d %s",&cmd,&line);
        if(cmd==2){
            num=0;
            length=strlen(line);
            for(j=0;j<length;j++){
                num=(num*10)+(line[j]-'0');
            }
            if(num<=strlen(ara)) pos=num;
        }
        else{
            if(strlen(line)>1){
                length=strlen(ara);
                if(pos>0){
                    j=pos-1;
                    for(;j<length-1;j++) {
                        ara[j]=ara[j+1];
                    }
                    ara[length-1]='\0';
                    pos--;
                }
            }
            else{
                length=strlen(ara);
                temp=line[0];
                for(j=pos;j<length+1;j++){
                    new_temp=ara[j];
                    ara[j]=temp;
                    temp=new_temp;
                }
                ara[length+1]='\0';
                pos++;
            }
            printf("%s\n",ara);
        }
    }
    printf("%s\n",ara);
    return 0;
}

