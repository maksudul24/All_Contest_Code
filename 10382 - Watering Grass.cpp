#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("out.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 10110
using namespace std;



double w,l;
int len;
struct point{
    double x,y;

};

point p[SIZE];


bool oper(point A,point B)
{
    if(A.x==B.x){
        return (A.y-A.x>B.y-B.x);
    }
    return A.x<B.x;
}

void get_point(ll int a,ll int b)
{

    double temp,x,y;
    temp=(w/2.0);
    temp=(b*b)-(temp*temp);
    temp=sqrt(temp);
    x=a-temp;
    if(x<0) x=0;
    y=a+temp;
    if(y>l) y=l;
    p[len].x=x;
    p[len].y=y;
    len++;


}

int get_sprinkle()
{
    int cnt=1,temp_cnt=0,i;
    double ed,temp_ed,max_l,last;
    bool sw=true,sw2=true;
    point u;
    max_l=0;
    sort(p,p+len,oper);
    last=p[0].y;
    if(len==1){
        if(p[0].y!=l) sw=false;
    }
    printf("%lf %lf\n",p[0].x,p[0].y);
    ed=p[0].y;
    temp_ed=p[0].y;
    for(i=1;i<len;i++){
        u.x=p[i].x;
        u.y=p[i].y;
        printf("%lf %lf\n",u.x,u.y);
        if(sw){
            if(u.x<=ed){
                temp_cnt++;
            //    if(temp_cnt==1) cnt++;
                if(u.y>max_l && u.y>ed){
                    if(sw2){
                        sw2=false;
                        cnt++;
                    }
                    temp_ed=u.y;
                    max_l=u.y;
                }
            }
            else{
                    sw2=true;
                    if(temp_ed<u.x){ sw=false; }
                    if(temp_cnt==0){ sw=false; }
                    max_l=0;
                    cnt++;
                    ed=u.y;
                    temp_cnt=0;
            }
            if(u.y>last) last=u.y;
        }
    }
    if(sw && last==l){
        return cnt;
    }
    return -1;
}

int main()
{
    int i,n,temp1,temp2;
    ll int a,b;
  //  freopen("in.txt","r",stdin),FO;

    while(scanf("%d %d %d",&n,&temp1,&temp2)!=EOF){
       l=temp1,w=temp2;
       len=0;
       for(i=0;i<n;i++){
           scanf("%lld %lld",&a,&b);
           if(b>=w) get_point(a,b);
       }
       printf("%d\n",get_sprinkle());

    }
    return 0;
}
