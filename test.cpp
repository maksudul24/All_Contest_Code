#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int getPt( int n1 , int n2 , float perc){
        return n1 + (n2 - n1)*perc;
    }
int main(){
   int xa, ya, xb, yb, x1=1, y1=1, x2=70, y2=166, x3=530, y3=20, x, y;
	int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
    setfillstyle(SOLID_FILL, RED);
   circle(x1,y1, 5);
    floodfill(x1,y1, WHITE);
   circle(x2,y2, 5);
    floodfill(x2,y2, WHITE);
   circle(x3,y3, 5);
    floodfill(x3,y3, WHITE);
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    for( float u=0; u<1; u=u+0.00001 ){
        x = ((1-u)*(1-u))*x1+x2*(u-u*u)+x3*u*u;
        y =((1-u)*(1-u))*y1+y2*(u-u*u)+y3*u*u;

        putpixel( x , y , RED );

         xa = getPt( x1 , x2 , u );
        ya = getPt( y1 , y2 , u );
        xb = getPt( x2 , x3 , u );
        yb = getPt( y2 , y3 , u );

        x = getPt( xa , xb , u );
        y = getPt( ya , yb , u );

         putpixel( x , y , RED );
    }
    getch();
	closegraph();
    return 0;
}
