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

int d[SIZE];

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

int main()
{
    int i,j,n,cas=0,ts,x,y,cnt,num,test,max_posi,min_posi;
    point temp(0,0),temp2(0,0);
    bool sw=false;
    priority_queue<point> q,p;
    freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            q.push(point(x,y));
        }
        temp=q.top();
        q.pop();
        cnt=1;
        test=temp.y;
        while(!q.empty()){
            sw=true;
            temp=q.top();
            if(test<temp.x){
                sw=false;
                test=temp.y;
                q.pop();
            }
            else if(!p.empty()){
                temp2=p.top();
                if(temp2.x<temp.x){
                    p.pop();
                    p.push(point(temp.y,temp.x));
                    q.pop();
                    sw=false;
                }
            }
            if(sw){
                    cnt++;
                p.push(point(temp.y,temp.x));
                q.pop();
            }

        }
        while(!p.empty()) p.pop();

        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}
