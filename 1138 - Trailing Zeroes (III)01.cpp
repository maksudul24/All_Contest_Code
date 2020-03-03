#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int cas=0,k,temp,h=3,ara[50],x,n,y;
    ll int i;
    temp=6;
    ara[2]=6;
    scanf("%d",&k);
    for(i=25;i<5000000000;i*=5){
        ara[h]=i+ara[h-1];
        h++;
    }
    for(i=2;i<h;i++) printf("%d ",ara[i]);
    printf("\n");
    while(k--)
    {
        scanf("%d",&n);
        y=n;
      //  if(n%5!=0){
            temp=n;
            if(n>6){
                x=ceil((log10(n-6))/(1.0*log10(5.0)));
             //   cout<<x<<endl;
               // x=2;
               if(x<2) x=2;
                while(x>=2){
                    temp=(y/ara[x]);
                  //  if(y%ara[x]==0) n+=2;
                    n=n-temp;
                    x--;
                }

            }
            n=n*5;
            printf("Case %d: %d\n",++cas,n);
     //   }
     //   else printf("Case %d: impossible\n",++cas);
    }
    return 0;
}
