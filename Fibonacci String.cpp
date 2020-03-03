#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 500
#define ar_size 100100
using namespace std;
int mark[SIZE];
int main()
{
    int k,ara[SIZE],sw,cnt,len,i,j,water_mark[SIZE],x,ara2[SIZE],n;
    char str[ar_size];
    freopen("in.txt","r",stdin);
    scanf("%d",&k);
    getchar();
    while(k--)
    {
        scanf("%s",str);
        sw=0,cnt=0,n=0;
        len=strlen(str);
        for(i=0;i<SIZE;i++){
                mark[i]=0;
                ara[i]=0;
                water_mark[i]=0;
        }
        for(i=0;i<len;i++){
            if(mark[str[i]]==1){
                ara[str[i]]++;
            }
            else{
                ara[str[i]]=1;
                mark[str[i]]=1;
                cnt++;
            }

        }
        if(cnt<3){
                printf("Dynamic\n");
                continue;
        }
        else{
            sort(ara,ara+SIZE);
            for(i=SIZE-1;i>1 && ara[i]>0;i--){
               water_mark[ara[i]]=1;
               ara2[n]=ara[i];
               n++;

            }
            for(i=0;i<n;i++){
                    for(j=0;j<n;j++){
                        x=ara2[i]+ara2[j];
                        if(water_mark[x]==1 && i!=j){
                            sw=1;
                            break;
                        }
                    }
                }
            }
        if(sw==1) printf("Dynamic\n");
        else printf("Not\n");
    }
    return 0;
}

