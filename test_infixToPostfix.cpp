#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<cstdio>
#define SIZE 50000
using namespace std;
char stac[SIZE],postfx[SIZE];
int t=0;

void push(char ch)
{
    if(t>SIZE) cout<<"Error: Overflow";
    stac[++t]=ch;
}
char pop()
{
    if(t<0){
        cout<<"Error: Underflow";
        exit(-1);
    }
    return stac[t--];
}
bool isvalid(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')) return true;
    return false;
}
int comp(char ch)
{
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
    else if(ch=='(' || ch==')') return 0;
}

int main()
{
    int len,i,h=0;
    char ara[SIZE],ch;
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
                postfx[h++]=pop();
            }
            t--;
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch== '/'){
            if(comp(ch)>comp(stac[t-1])){
                push(ch);
            }
            else{
                while(comp(ch)<=comp(stac[t])){
                    postfx[h++]=pop();
                }
            }
        }
    }
    while(t>0){
        pop();
    }
    printf("%s\n",postfx);
}
