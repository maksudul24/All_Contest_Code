#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
using namespace std;
int main()
{
    int cas=0,k,sw=0,my[1000],opps[1000],n,i,j,cnt;
    scanf("%d",&k);
    while(k--)
    {
        cnt=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&my[i]);
        }
        for(i=0;i<n;i++){
            scanf("%d",&opps[i]);
        }
        sort(my,my+n);
        sort(opps,opps+n);
        for(i=0;i<n;i++){
            for(j=n-1;j>=0;j--){

                if(my[i]>opps[j]){
                      //  cout<<my[i]<<" > "<<opps[j]<<endl;
                        cnt+=2;
                        opps[j]=2000;
                        my[i]=-1;
                        break;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(my[i]==opps[j]){
                  //  cout<<my[i]<<" == "<<opps[j]<<endl;
                    my[i]=-1;
                    opps[j]=2000;
                    cnt++;
                    break;
                }
            }
        }
        printf("Case %d: %d\n",++cas,cnt);
    }
    return 0;
}
