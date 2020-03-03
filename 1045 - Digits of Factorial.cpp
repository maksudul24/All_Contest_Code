#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double logg[1000005];
int main()
{
    int i,n,base,dig,k,cas=0;
    double ans;
    logg[1]=0;
    for(int i=2;i<=1000005;i++){
        logg[i]=logg[i-1]+log10(i);
    }
    cin>>k;
    while(k--){
            ans=0;
            scanf("%d %d",&n,&base);
            if(n) printf("Case %d: %d\n",++cas,(int)ceil(logg[n]/log10(base)));
            else printf("Case %d: %d\n",++cas,1);
    }
    return 0;
}
