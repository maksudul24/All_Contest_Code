
#include<stdio.h>
int main()
{
    int guard1,guard2,client,num,n,i;
    scanf("%d %d %d",&guard1,&client,&guard2);
    //scanf("%d",&n);
    //int ara[n];
   // for(i=0;i<n;i++){
      //  scanf("%d",&ara[i]);
    //}

    if(client > guard1 && client<guard2){
        client=guard2-guard1;
        printf("%d\n",client);
    }
    else if(client>guard1 && client>guard2){
        client=guard1-1;
        printf("%d\n",client);
    }
    else if(client<guard2 && client<guard2){
        client=n-guard2;
        printf("%d\n",client);
    }
    else if( client==guard1 || client==guard2){
        client=0;
        printf("%d\n",client);
    }
    return 0;
}
