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
    int i,j,n,cas=0,ts,mark[100010],v;
  //  freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    vector<int> node[10010];
    queue<int> q;
    stack<int> test;
    while(ts--){
        scanf("%d",&n);
        memset(mark,0,sizeof(mark));
        for(i=0;i<n;i++){
            scanf("%d",&v);
            if(mark[v]!=-1){
                    mark[v]=-1;
                    test.push_back(v);
            }
            scanf("%s",str);
            len=strlen(str);
            num=0;
            while(len--){
                if(str[len]>='0' && str[len]<='9'){
                    num=num*10+str[len]-48;
                }
            }
            getchar();
            while(num--){
                scanf("%d",&x);
                if(mark[x]!=-1){
                        test.push_back(x);
                        mark[x]=-1;
                }
                node[v].push_back(x);
            }

        }
        for(i=0;i<10010;i++) level[i]=-2;
        while(test.empty()){
                x=test.top();
                test.pop();
                if(mark[x]==-1){
                    q.push(x);
                    mark[x]=1;
                    level[x]=0;
                    while(!q.empty()){
                        u=q.front();
                        q.pop();
                        mark[u]=1;
                        length=node[u].size();
                        for(v=0;v<length;v++){
                            if(level[node[u][v]]==-2){
                                level[node[u][v]]=level[u]+1;
                                mark[node[u][v]]=1;
                                q.push(node[u][v]);
                            }

                        }
                    }
                }
        }
    printf("Case %d: %d\n",++cas,);
    }
    return 0;
}

