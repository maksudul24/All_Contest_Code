#include<iostream>
#include<cstring>
#include<cstdio>
#define SIZE 50000
using namespace std;
int stac[SIZE],postfx[SIZE];
t=0;
void push(char ch)
{
    if(t>SIZE) cout<<"Error: Overflow";
    stac[t]=ch;
    t++;
}
char pop()
{
    if(t==0) cout<<"Error: Underflow";
    t--;
    return stac[t];
}
bool isvalid(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')) return true;
    return false;
}
int cmp(char ch)
{
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
    else if(ch=='(' || ch==')') return 0;
}

int main()
{
    int len,i,h=0;
    char ara[SIZE];
    cin>>ara;
    len=strlen(ara);
    for(i=0;i<len;i++){
            ch=ara[i];
        if(ch=='('){
            push(ch);
        }
        else if(isvalid(ch)){
            postfx[h++]=ch;
        }
        else if(ch==')'){
            while(ch!='('){
                postfx=pop();
            }
            pop();
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch== '/'){
            if(comp(ch)>stac[t-1]){
                push(ch);
            }
            else{
                while(comp(ch)<=stac[t-1]){
                    postfx[h++]=pop();
                }
            }
        }
    }
    while(t){
        pop();
    }
    printf("%s\n",postfx);
}
