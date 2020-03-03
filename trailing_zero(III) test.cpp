#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020
using namespace std;
int main()
{
    int cas=0,k,temp,n,cnt,i,max_v=0;
  //  freopen("in.txt","r",stdin);
    scanf("%d",&k);
    while(k--)
    {
        i=5,cnt=0,temp=0;
        while(k/i){
            cnt+=k/i;
            if(i!=5) temp+=k/i;
            i=i*5;
        }
      //  printf("expected: %d, real: %d\n",cnt/5,temp);
        if((cnt/5)-temp>max_v){
           max_v=(cnt/5)-temp;
        }
    }
    printf("%d\n",max_v);
    return 0;
}

