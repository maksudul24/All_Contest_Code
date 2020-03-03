#include<stdio.h>
#include<math.h>
#include<string.h>
int stck[1000],top=0,max_v=1000;
void push(int x);
int pop();
int result(char *st);
int main()
{
    char str[10000];
    printf("Enter the postfix\n");
    gets(str);
    printf("Result is\n%s = %d\n",str,result(str));
    return 0;
}
void push(int x)
{
    if(top==max_v){
        printf("Stack over flow\n");
        return;
    }
    stck[top]=x;
    top++;
    return;
}
int pop()
{
    if(top==0){
        printf("Stack is Empty\n");
        return 0;
    }
    top--;
    return stck[top];
}
int result(char *st)
{
    int i=0,n,x,num1,num2;
    n=strlen(st);
    for(i=0;i<n;){
        if(st[i]=='+' || st[i]=='-' || st[i]=='*' || st[i]=='/' || st[i]=='^'){
            num1=pop();
            num2=pop();
            switch(st[i]){
                case '+':push(num2+num1);
                            break;
                case '-':push(num2-num1);
                            break;
                case '*':push(num2*num1);
                            break;
                case '/':push(num2/num1);
                            break;
                case '^':push(pow(num2,num1));
                            break;
            }
            i++;
        }
        else{
            x=0;
            if(st[i]==' ') i++;
            while(st[i]!=' ' && st[i]!='\n' st[i]!='+' && st[i]!='-' && st[i]!='*' && st[i]!='/' && st[i]!='^' ){
                i++;
                x=x*10+(st[i]-'0');
            }
            if(x) push(x);
        }
    }
    return pop();

}
