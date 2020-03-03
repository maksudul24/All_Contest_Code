#include<stdio.h>
int main()
{
    int k,cas=0,ara[120],x,y,j,i,m,n,temp,l;
    char ch;
    scanf("%d",&k);
    while(k--){
        printf("Case %d:",++cas);
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        while(m--){
            scanf(" %c",&ch);
            if(ch=='S'){
                scanf("%d",&x);
                for(i=0;i<n;i++){
                    ara[i]+=x;
                }
            }
            else if(ch=='M'){
                scanf("%d",&x);
                for(i=0;i<n;i++){
                    ara[i]=ara[i]*x;
                }
            }
            else if(ch=='D'){
                scanf("%d",&x);
                for(i=0;i<n;i++){
                   ara[i]=ara[i]/x;
                }
            }
            else if(ch=='P'){
                scanf("%d %d",&x,&y);
                    temp=ara[x];
                    ara[x]=ara[y];
                    ara[y]=temp;
            }
            else if(ch=='R'){
                j=n-1;
                for(i=0;i<n/2;i++,j--){
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }
        printf("\n");
        for(i=0;i<n;i++){
            printf("%d",ara[i]);
            if(i!=n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
