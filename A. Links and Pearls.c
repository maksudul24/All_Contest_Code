#include<stdio.h>
#include<string.h>
int main()
{
    int cnt,i,sw,n;
    char ara[200];
    scanf("%s",ara);
    n=strlen(ara);
    cnt=0;
    for(i=0;i<n;i++){
        if(ara[i]=='-') cnt++;
    }
    if(cnt==0) sw=1;
    else if(n-cnt==0) sw=1;
    else if(cnt%(n-cnt)==0) sw=1;
    else sw=0;
    if(sw==1) printf("YES\n");
    else printf("NO\n");
    return 0;
}
