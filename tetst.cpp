#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define SIZE 100020;
using namespace std;
int main()
{
    int cas=0,k,i,j,len2,len1,len,l;
    char line1[2000],line2[2000],lin1cp[2000],lin2cp[2000],new1[2000],new2[2000];
    while(scanf("%s %s",line1,line2)!=EOF)
    {
        strcpy(lin1cp,line1);
        strcpy(lin2cp,line2);
        len1=strlen(line1);
        len2=strlen(line2);
        if(len1>len2) len=len1;
        for(i=0;i<len2;i++){
                for(j=0;j<len1;j++){
                    if(line2[i]==lin1cp[j] && j==0){
                        lin1cp[j]='\0';
                        cout<<line2[i]<<endl;
                        break;
                    }
                    else if(line2[i]==lin1cp[j] && j!=0 && lin1cp[j-1]=='\0'){
                        lin1cp[j]='\0';
                         cout<<line2[i]<<endl;
                        break;
                    }
                }
        }
        k=0;
        l=0;
        for(i=0;i<len;i++){
            if(lin1cp[i]!='\0' && i<len2){
                new2[l]=lin1cp[i];
                l++;
            }
        }
        new2[l]='\0';
        strcat(line2,new2);
        len2=strlen(line2);
        cout<<len2<<endl;
        line2[len2]='\0';
         printf("%s\n",line2);
          memset(line1,'\0',sizeof(line1));
        memset(line2,'\0',sizeof(line2));
        memset(lin2cp,'\0',sizeof(lin2cp));
        memset(lin1cp,'\0',sizeof(lin1cp));
        memset(new1,'\0',sizeof(new1));
        memset(new2,'\0',sizeof(new2));

    }
    return 0;
}

