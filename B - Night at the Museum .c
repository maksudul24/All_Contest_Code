#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,cnt=0,cl,ant_cl;
    char str[101];
    scanf("%s",str);
    n=strlen(str);
    if(str[0]<='n'){
        cnt=str[0]-'a';
    }
    else{
        cnt=26-(str[0]-'a');
    }
    for(i=1;i<n;i++){
            cl=str[i]-str[i-1];
            if(cl<0){
                cl=cl*(-1);
            }
            ant_cl=str[i]-str[i-1];
            if(ant_cl<0){
                ant_cl=ant_cl*(-1);
            }
            ant_cl=26-ant_cl;
        if(cl<ant_cl){
            cnt+=cl;
        }
        else{
            cnt+=ant_cl;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
