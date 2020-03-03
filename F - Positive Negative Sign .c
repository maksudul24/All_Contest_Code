#include<stdio.h>
int main()
{
    int st_n,st_p,pos_n,neg_n,temp,i,con,j,len,n,m,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
            scanf("%d %d",&n,&m);
            st_n=1;
            st_p=1+m;
            len=n/(2*m);
            con=(m*m)-m;
            con=con/2;
                neg_n=(st_n*m)+con;
                pos_n=(st_p*m)+con;
            con=pos_n-neg_n;
            con=con*len;
            printf("Case %d: %d\n",i,con);
    }
    return 0;

}
