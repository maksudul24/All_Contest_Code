#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define INF INT_MAX
#define LL long long
#define ULL unsigned LL
#define EPS 0.00000001
#define PI acos(-1.0)
#define MOD 100000007LL
#define pii pair<int,int>
#define pll pair<LL,LL>
#define ck(XX) cout<<XX<<endl
#define Set(XX,PS) XX(1<<PS)
#define Reset(XX,PS) XX&(~(1<<PS))
#define Toggle(XX,PS) (XX^(1<<PS))
#define Check(XX,PS) (bool)(XX&(1<<PS))
#define SORT(v) sort(v.begin(),v.end())
#define REVERSE(V) reverse(v.begin(),v.end())
#define Fin freopen("input.txt","r",stdin)
#define Fout freopen("output.txt","w",stdout)
#define VALID(X,Y,R,C) X>=0 && X<R && Y>=0 && Y<C
#define SIZE(ARRAY) sizeof(ARRAY)/sizeof(ARRAY[0])
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define RT printf("Run Time : %0.3lf seconds\n", clock()/(CLOCKS_PER_SEC*1.0))

int main()
{
    long long int prev=0,n,m,x,cnt=0,page=0,limit,k,i,num=0,temp,room,prev_room,dif1,dif2;
    bool sw=true;
    cin>>n>>m>>k;
    for(i=1;i<=m;i++){
        cin>>x;
        page+=(x-prev)-1; //
        if(i==1){
            temp=x/k;
            if(x%k!=0) temp++;
            limit=temp*k;
            prev_room=page/k;
        }
        if(x>limit){
            sw=true;
            room=page/k;
            if(room!=prev_room){
                temp=(x-i+1)/k; // x er man change hoy nai tai original position ber kore tar sathe ager gulo jog
                if((x-i+1)%k!=0) temp++;
                else temp--;
                limit=(temp*k)+i-1;
                if(limit<0) limit=n;


            }
            else limit+=num;
            num=0;
            prev_room=room;
        }
        if(sw){
                cnt++;
                sw=false;
        }
         num++;
     //   printf("l:%d p:%d Page:%d\n",limit,page,room);
        prev=x;
    }
    cout<<cnt<<endl;
    return 0;
}
