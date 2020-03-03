#include<stdio.h>
int main()
{
    int n,a,b,m,add=0,i,c=0;
    scanf("%d %d %d",&n,&a,&b);
    int ara1[a],ara2[b];
    for(i=0;i<n;i++){
        scanf("%d",&m);
            if(m==1){
                if(m==1 & a!=0){
                    a--;
                }
                else if(a==0 & b!=0){
                    b--;
                    c++;
                }
                else if(c!=0){
                    c--;
                }
                else{
                    add=add+m;
                }
            }
            else{
                if(b!=0){
                    b--;
                }
                else{
                    add=m+add;
                }
            }
    }

    printf("%d\n",add);
    return 0;
}
