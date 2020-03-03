#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{

    int ara[2001],ans[2001],chk[2001],ara2[2001];
    int i,j,n,x=-1,now=0,max_v=-1,pos,cnt;
    scanf("%d",&n);
    memset(chk,0,sizeof(chk));
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
   //     if(ara2[i]!=-1 && ara2[i]!=x){
            cnt=now;
            for(j=0;j<n;j++){
                if(ara[j]>max_v){
                    max_v=ara[j];
                    pos=i+1;
                    cnt=now;
                }
                else if(ara[i]==max_v){
                    cnt++;
                }

            }
            ans[i]=pos+cnt;
            x=max_v;
            max_v=-1;
            chk[ara[i]]=pos+cnt;
            now=cnt;
        }
   //     else{
      //      ans[i]=chk[ara[i]];
     //   }
  //  }
    for(i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}
