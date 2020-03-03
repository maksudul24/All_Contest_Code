#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1100
using namespace std;

int main()
{
    int i,j,n,ara[SIZE],x,h,temp,cnt,k,max_k;
    bool sw=true;
    // freopen("in.txt","r",stdin);
    scanf("%d",&n);
    scanf("%d",&ara[0]);
    temp=ara[0];
    for(i=1;i<n;i++){
        scanf("%d",&x);
        ara[i]=x-temp;
        temp=x;
    }
    for(i=0;i<n;i++) printf("%d ",ara[i]);
    cout<<endl;
    h=0,temp=0,cnt=1,k=0,max_k=0;
    for(i=1;i<n;i++){
        k++;
        if(ara[i]==ara[h]){
            for(h=0;h<k && h+i<n;h++){
                if(ara[h]!=ara[i+h]) break;
            }
            if(h==k){
                if(k>max_k){
                    cnt=1;
                    max_k=k;
                    k=i;
                }
                else{
                    cnt++;
                    k=0;
                }
            }

        }
        if(k>max_k){
            max_k=k;
            cnt=1;
        }
    }
    if(h!=k && h!=0){
        if(h!=k) printf("%d\n",cnt+1);
        else printf("%d\n",cnt);
        for(i=1;i<=cnt;i++){
            printf("%d",i*k);
            if(i!=cnt) printf(" ");
        }
        if(h!=k) printf(" %d\n",cnt*k+h);
        else cout<<endl;
    }
    else{
        printf("1\n%d\n",n);
    }
    return 0;
}

