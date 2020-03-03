#include<stdio.h>
#include<string.h>
int main()
{
    int i,ch,trs,n,let1[10000];
    char num[26],let2[26],inp[1000],oup[1000],a1;
    gets(num);
    for(i=0;i<26;i++){
        ch=num[i];
        let1[ch]=i;
    }
    gets(let2);
    gets(inp);
    n=strlen(inp);
    for(i=0;i<n;i++){
        ch=inp[i];
        if(inp[i]>=65 && inp[i]<=90){
            trs=let1[ch+32];
            oup[i]=let2[trs]-32;
        }
        else if(inp[i]>=97 && inp[i]<=122){
            trs=let1[ch];
            oup[i]=let2[trs];
        }
        else{
            oup[i]=inp[i];
        }
    }
    printf("%s\n",oup);
    return 0;
}
