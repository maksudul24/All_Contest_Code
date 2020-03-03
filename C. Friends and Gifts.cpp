#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout)
#define FI freopen("in.txt","r",stdin)
#define TFO freopen("Test_Output.txt","w",stdout)
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define SIZE 200100
#define uu first
#define vv second
#define pii pair<int,int>
#define dbug(a, args...) printf("Line:%d " a,__LINE__, ##args)

int ara[SIZE],emp[SIZE],num[SIZE];
bool mark[SIZE];

int main()
{
    int i,j,cas=0,ts,ans,n,m,temp,h;
  //  FI;
    memset(mark,true,sizeof(mark));
    scanf("%d",&n);
    for(i=1,h=0;i<=n;i++){
        scanf("%d",&ara[i]);
        mark[ara[i]]=false;
        if(ara[i]==0){
            emp[h++]=i;
        }
    }
    for(i=1,j=0;i<=n;i++){
        if(mark[i]){
            num[j++]=i;
        }
    }
    for(i=0;i<h;i++){
        if(emp[i]!=num[i]){
            emp[i]=num[i];
        }
        else{
            if(i!=h-1){
                emp[i+1]=num[i];
                emp[i]=num[i+1];
                i++;
            }
            else{
                emp[i]=emp[0];
                emp[0]=num[i];
            }
        }
    }
    for(i=1,j=0;i<=n;i++){
        if(ara[i]!=0) printf("%d",ara[i]);
        else{
            printf("%d",emp[j]);
            j++;
        }
        if(i!=n) printf(" ");
        else printf("\n");
    }

    return 0;
}

