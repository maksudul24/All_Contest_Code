#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,cnt1=0,cnt2=0,true=0;
    char s[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        k=strlen(s);
        if(k==0){
            break;
        }
        for(j=0;j<k;j++){
         if(s[j]=='[' || s[j]==']' || s[j]=='(' || s[j]==')'){
                        if(s[j]=='['){
                            cnt1++;

                        }
                        if(s[j]==']'){
                            cnt1--;

                        }
                        if(s[j]=='('){
                            cnt2++;

                        }
                        if(s[j]==')'){
                            cnt2--;

                        }
                        true++;
                    }
        }
        if(cnt1==0 && cnt2==0 && true>0){
            printf("yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
