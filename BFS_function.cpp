
#define SIZE 100000

int BFS(int n,vector<int> node[],int destination)
{
    int level[SIZE],u,v,i,distance;
    queue <int>q;
    q.push(n);
    level[n]=1;
    distance=0;
    for(i=0;i<SIZE;i++) level[i]=12345678;
    while(!q.empty){
        u=q.top();
        q.pop();
        length=node[u].size();
        for(i=0;i<length;i++){
            if(level[node[u][v]]!=12345678){
                level[node[u][v]]=level[u]+1;
                if(node[u][v]==destination) return level[node[u][v]];
                q.push(node[u][v]);
            }
        }
    }
    return distance;

}
