#include<stdio.h>
int a=0;
char ara[1000];
int push(char ch);
int pop();
int main()
{
    char str[10000];

}
int push(char ch)
{
    if(a<=limit){
        ara[a]=ch;
        a++;
    }
    else printf("Stack over flow\n");
    return a;
}
int pop()
{
    a--;
    if(a<0){
        a++;
        printf("The stack is empty nothing left to pop\n");
        return a;
    }
    return a;
}
