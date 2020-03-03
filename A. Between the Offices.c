#include<stdio.h>

int main()
{
    int n,i,sw,francisco=0,seattle=0;
    scanf("%d ",&n);
    char ara[n];
    scanf("%s",ara);
    if(ara[0]=='S'){
        sw=1;
    }
    else{
        sw=0;
    }
    n=n-1;
    for(i=0;i<n;i++){
        if(sw==1 && ara[i]=='S'){
            if(ara[i+1]=='F'){
                    francisco++;
                    sw=0;
            }
        }
        else if(sw==0 && ara[i]=='F'){
            if(ara[i+1]=='S'){
                seattle++;
                sw=1;
            }
        }
    }
    if(francisco>seattle){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;

}
