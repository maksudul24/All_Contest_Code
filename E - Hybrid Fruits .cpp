#include<iostream>
#include<string.h>
#include<stdio.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020;
using namespace std;
int main()
{
    int cas=0,k,i,j,len2,len1,len,l;
    char line1[200],line2[200],lin1cp[200],lin2cp[200],new1[200],new2[200];
    while(scanf(" %s %s",line1,line2)==2)
    {
        strcpy(lin1cp,line1);
        strcpy(lin2cp,line2);
        len1=strlen(line1);
        len2=strlen(line2);
        if(len1>len2) len=len1;
        else len=len2;
        for(i=0;i<len;i++){
            if(i<len1){
                for(j=0;j<len2;j++){
                    if(line1[i]==lin2cp[j] && j==0){
                        lin2cp[j]='0';
                        break;
                    }
                    else if(line1[i]==lin2cp[j] && j!=0 && lin2cp[j-1]=='0'){
                        lin2cp[j]='0';
                        break;
                    }
                }
            }
            if(i<len2){
                for(j=0;j<len1;j++){
                    if(line2[i]==lin1cp[j] && j==0){
                        lin1cp[j]='0';
                        break;
                    }
                    else if(line2[i]==lin1cp[j] && j!=0 && lin1cp[j-1]=='0'){
                        lin1cp[j]='0';
                        break;
                    }
                }
            }
        }
        k=0;
        l=0;
     //   printf("len:%d\n",len);
        for(i=0;i<len;i++){
            if(i<len2){
                if(lin2cp[i]!='0'){
                    new1[k]=lin2cp[i];
                    k++;
                }
            }
            if(i<len1){
                if(lin1cp[i]!='0'){
                    new2[l]=lin1cp[i];
                    l++;
                }
            }
        }
        new1[k]='\0';
        new2[l]='\0';
        //printf("%s %s\n",new1,new2);
        strcat(line1,new1);
        strcat(line2,new2);
        len1=strlen(line1);
        len2=strlen(line2);
        line1[len1]='\0';
        line2[len2]='\0';
        if(len1<=len2){
            printf("%s\n",line1);
        }
        else printf("%s\n",line2);
          memset(line1,'\0',sizeof(line1));
        memset(line2,'\0',sizeof(line2));
        memset(lin2cp,'\0',sizeof(lin2cp));
        memset(lin1cp,'\0',sizeof(lin1cp));
        memset(new1,'\0',sizeof(new1));
        memset(new2,'\0',sizeof(new2));



    }
    return 0;
}

