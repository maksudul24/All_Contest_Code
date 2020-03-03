#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 100
using namespace std;

struct point{
        int x,y;
        point(int _x,int _y){
            x=_x;
            y=_y;
        }
};

bool operator<(point A,point B) {
    return A.x>B.x;
}

priority_queue<point> q;


int calculate()
{
    point temp(0,0);
    temp=q.top();
    int test=temp.y,total=1;
    q.pop();
    while(!q.empty()){
        temp=q.top();
        printf("%d %d test:%d\n",temp.x,temp.y,test);
        if(temp.x>test){
            test=temp.y;
            q.pop();
        }
        else{
            printf("Phase %d %d\n",temp.x,temp.y);
            total=calculate()+1;
        }
    }
    return total;
}

int main()
{
    int i,j,n,cas=0,ts,x,y,cnt,num,test,swt;
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            q.push(point(x,y));
        }

        printf("Case %d: %d\n",++cas,calculate());
    }
    return 0;
}

