#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,y,j=1,ans,rem;
    freopen("in.txt","r",stdin);
    scanf("%d",&i);
    while(i--){

        scanf("%d %d",&x,&y);

        if(x<3 || y<3){
            if(x==1 || y==1) {
                    if(y>x) x=y;
            }
            else{
                ans=(x*y)/8;
                rem=(x*y)-(ans*8);
                if(rem>4) rem=4;
                x=ans*4+rem;

            }
        }
        else{

            x=x*y;
            if(x%2!=0){
                x++;
            }
            x=x/2;
        }
        printf("Case %d: %d\n",j,x);
        j++;

    }
    return 0;
}
