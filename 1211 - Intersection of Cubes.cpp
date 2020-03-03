#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int x1,y1,z1,x2,y2,z2,min_x,min_y,min_z,max_x,max_y,max_z,x,y,z,n,i,j,k;
    cin>>k;
    for(j=1;j<=k;j++){
            scanf("%d",&n);
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            max_x=x1,max_y=y1,max_z=z1,min_x=x2,min_y=y2,min_z=z2;
            for(i=1;i<n;i++){
               cin>>x1>>y1>>z1>>x2>>y2>>z2;
                if(x1>max_x) max_x=x1;
                if(y1>max_y) max_y=y1;
                if(z1>max_z) max_z=z1;
                if(x2<min_x) min_x=x2;
                if(y2<min_y) min_y=y2;
                if(z2<min_z) min_z=z2;

            }

            x=min_x-max_x; if (x<0) x=0;
            y=min_y-max_y; if(y<0) y=0;
            z=min_z-max_z; if(z<0) z=0;
          //  printf("%d %d %d\n",x,y,z);
            x=x*y*z;
            cout<<"Case "<<j<<": "<<x<<endl;
    }
    return 0;
}
