#include<stdio.h>
#include<math.h>
int main(){
    int n,len,swtch,i;
    scanf("%d",&n);
     len=sqrt(n);
    for(i=len;i>1;i--){
        if(n%i==0){
          swtch=0;
          break;
          }
        else{
            swtch=1;
        }
    }
    printf("%d\n",swtch);
    return 0;
}
