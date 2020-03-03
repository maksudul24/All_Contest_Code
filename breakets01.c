#include<stdio.h>
#include<string.h>
int count,limit,length=0;
char ara[10001];
void fun2(int x);
void fun1(int x)
{
    if(length==limit){
        return;
    }
    count++;
    length++;
    printf("Count1:%d\n",count);
    if(ara[x]==')'){
        count--;


    }
    else if(ara[x]=='('){
        fun1(x+1);
    }
    else if(ara[x]=='['){
        fun2(x+1);
    }
    else{
        return;
    }

}
void fun2(int x)
{
    if(limit==length){
        return;
    }
    count++;
    length++;
    printf("count2: %d\n",count);
    if(ara[x]==']'){
        count--;

    }
    else if(ara[x]=='['){
        fun2(x+1);
    }
    else if(ara[x]=='('){
            fun1(x+1);

    }
    else{

        return;
    }
}


int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",ara);
        length=0;
        count=0;
        limit=strlen(ara);
        if(ara[0]=='('){
            fun1(1);
        }
        else if(ara[0]='['){
            fun2(1);
        }
        else{
            printf("NO\n");
            continue;
        }
        if(count==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

