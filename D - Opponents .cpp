#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,x,y,sw,cnt=0,max_v=0,n,d;
    cin>>n>>d;
    char test[101];
    for(i=0;i<d;i++){
        sw=0;
        cin>>test;
        for(j=0;j<n;j++){
            if(test[j]=='0'){
                sw=1;
                break;
            }

        }
        if(sw==0){
                cnt=0;
        }
        else if(sw==1){
                cnt++;
            if(cnt>max_v){
                    max_v=cnt;
            }
        }
    }
    cout<<max_v<<endl;
    return 0;
}
