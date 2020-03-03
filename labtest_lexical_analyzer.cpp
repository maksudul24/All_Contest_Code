#include<bits/stdc++.h>
using namespace std;
char ch[50];

int is_char(char ch){
    if(ch>='A'&&ch<='Z') return 1;
    if(ch>='a'&&ch<='z') return 1;
    return 0;
}
int is_digit(char ch){
    if(ch>='0' && ch<='9') return 1;
    return 0;
}

void solve(){
    int count_dot=0,len=0;
    bool sw=false;
    int length=strlen(ch);
    int i, count;
    if((ch[0]>='a' && ch[0]<='h') || (ch[0]>='A' && ch[0]<='H') || (ch[0]>='o' && ch[0]<='z') || (ch[0]>='O' && ch[0]<='Z')){
        count=1;
        for(i=1;i<length;i++){
            if(is_char(ch[i]) || is_digit(ch[i]))
                count++;
        }
        if(count==length)
            printf("Float Variable\n");
        else
            printf("Invalid\n");
    }
    else if(ch[0]>='0' && ch[0]<='9'){
        count=1;
        for(i=1;i<length;i++){
            if(is_digit(ch[i]) || ch[i]=='.'){
                count++;
                if(ch[i]=='.'){
                    sw=true;
                    count_dot++;
                }
                if(sw) len++;
            }
        }

        if(length==count && len>2 && count_dot==1){
            printf("Double\n");
        }
        else if(length==count && len<=2 && count_dot==1){
            printf("Float\n");
        }
        else printf("Invalid");

    }
    else{
        printf("Invalid\n");
    }
}

int main(){

    gets(ch);
    solve();


}
