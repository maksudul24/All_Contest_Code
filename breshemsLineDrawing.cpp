#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int top=8,bottom=1,left=2,right=1;

int bin(int x,int y)
{
    int ans=0;
    if(y>yh)    ans=ans|top;
    if(y<yl)  ans=ans|bottom;
    if(x>xh) ans=ans|right;
    if(x<xl) ans=ans|left;
    return ans;
}

int main()
{
    int x,y;
        sw=false;
        while(true){

            if(point1==0 & point2==0){
                sw=true;
            }
            else if(point1 & point2){
                break;
            }
            else{
                if(point1!=0){
                    point=point1;
                }
                else point=point2;

                if(point & TOP){
                    x=x1+(x2-x1)*(ymax-y1)/(y2-y1);
                    y=ymax;
                }
            }


        }
    }
}
