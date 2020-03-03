#include<stdio.h>
#include<string.h>
int main()
{
    int n,loop=0,loop2=0,i,sw=0,k,j;
    char ara[1000];
    scanf("%d",&k);
    for(j=0;j<k;j++){
            loop=0,loop2=0,sw=0;
            scanf("%s",ara);
            n=strlen(ara);
            for(i=0;i<n;i++){
                if(ara[i]=='('){
                    loop++;
                }
                else if(ara[i]==')' && loop>0){
                    loop--;
                }
                else if(ara[i]=='['){
                    loop2++;
                }
                else if(ara[i]==']' && loop2>0){
                    loop2--;

                }
                else{
                    sw=1;
                    break;
                }
            }
            if(sw==1){
                printf("NO\n");
            }
            else if(loop==0 && loop2==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
    }
    return 0;
}
