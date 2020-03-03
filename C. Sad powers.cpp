#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 1000020;
int main()
{
    int cas=0,k,x,y,a,b,ans,ans_b,i;
    double temp;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d %d",&a,&b);
        temp=1.0*b/a;
        x=10,ans=0,ans_b=0;
        for(i=2;log10(temp)/(1.0*log10(i))>1;i++){
            x=log10(temp)/(1.0*log10(i));
            if(x<2) break;
            ans+=x;
        }
        printf("%d\n",ans);
    }
    return 0;
}

