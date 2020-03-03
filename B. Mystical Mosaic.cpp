#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
using namespace std;
int main()
{
    int cas=0,k,sw1=0,sw2=0,cnt=0,m,n,i,j;
    char ara[100][100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%s",ara[i]);
    }
    for(i=0;i<n;i++){
        if(i!=j){
            for(j=0;j<n;j++){
                    sw1=0,sw2=0;
                for(k=0;k<m;k++){
                        if(ara[i][k]==ara[j][k]){
                         //   cout<<ara[i][k]<<" ("<<i<<","<<k<<")"<<" == "<<ara[j][k]<<" ("<<j<<","<<k<<")"<<endl;
                            sw1=1;
                            if(sw2==1) break;
                        }
                        else if(ara[i][k]!=ara[j][k]){
                         //   cout<<ara[i][k]<<" ("<<i<<","<<k<<")"<<" != "<<ara[j][k]<<" ("<<j<<","<<k<<")"<<endl;
                            sw2=1;
                            if(sw1==1) break;
                        }
                }
                if(sw1==1 && sw2==1) break;
            }
            if(sw1==1 && sw2==1) break;
            cnt++;
        }
    }
  //  cout<<"Cnt: "<<cnt<<endl;
    if(cnt==n) printf("Yes\n");
    else printf("No\n");

    return 0;
}

