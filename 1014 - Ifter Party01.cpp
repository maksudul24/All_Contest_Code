#include<stdio.h>
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int fac[1000000],np;
void divisor(int n);
int main()
{
    int i,n,x,m,a,cas=0,y,sw=0;
    scanf("%d",&n);
    while(n--){
            np=0;
        scanf("%d %d",&x,&m);
        a=x-m;
         divisor(a);
         sw=1;
         sort(fac,fac+np);
        printf("Case %d: ",++cas);
            for(i=0;i<np;i++){
                if(m)
                {
                    if(m==x%fac[i]){
                            sw=0;
                            printf("%d",fac[i]);
                            if(i!=np-1) printf(" ");
                    }
                }
                else{
                    sw=0;
                    printf("%d",fac[i]);
                    if(i!=np-1) printf(" ");
                }
            }
            if(m==0 && x==0){
                    sw=0;
                    printf("%d",1);
            }
        if(sw) printf("impossible");
        printf("\n");

    }
    return 0;

}
void divisor(int n)
{
    int i,j,limit=sqrt(n*1.0)+0.5;
    for(i=1;i<=limit;i++){
        if(n%i==0){
            fac[np++]=i;
            if(i!=n/i) fac[np++]=n/i;
        }
    }
    return;


}
