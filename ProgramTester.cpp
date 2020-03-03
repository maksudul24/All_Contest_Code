#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFI freopen("Test_Output.txt","r",stdin)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 100000
#define uu first
#define vv second
#define pii pair<int,int>

using namespace std;

void delay(int number_of_seconds)
{
    int milli_seconds = number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}


int main()
{
    int i=0;
    bool sw=true;
    FILE* page1;
    FILE* page2;
    char ara[SIZE],ara2[SIZE];
    page1=fopen("out.txt","r");
    page2=fopen("Test_Output.txt","r");
    if (page1 == NULL || page2==NULL){
        return 1;
    }
    while(fgets(ara,sizeof ara,page1)!=NULL && fgets(ara2,sizeof ara2,page2)!=NULL){
        if(strcmp(ara,ara2)!=0){
            cout<<"Not Matched"<<endl;
            sw=false;
            break;
        }
        i++;
    }
    if(sw){
        if(i>0) cout<<"Matched"<<endl;
        else cout<<"Not Matched"<<endl;
    }
    fclose(page1);
    fclose(page2);
    delay(900);
    return 0;
}

