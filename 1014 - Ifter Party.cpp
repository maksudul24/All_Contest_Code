#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> div[30000002];
void divisor(int n);
int main()
{
    int i,n,x,m,a,cas=0,y,sw=0;
    scanf("%d",&n);
    divisor(300000000);
    while(n--){
        scanf("%d %d",&x,&m);
        a=x-m;
         sw=1;
        printf("Case %d: ",++cas);
            for(i=0;i<div[a].size();i++){
                y=div[a][i];
                if(m)
                {
                    if(m==x%y){
                            sw=0;
                            printf("%d ",y);
                    }
                }
                else{
                    sw=0;
                    printf("%d ",y);
                }
            }
        if(sw) printf("impossible");
        printf("\n");

    }
    printf("\n");
    return 0;

}
void divisor(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=i;j<=n;j+=i)
            div[j].push_back(i);
}
