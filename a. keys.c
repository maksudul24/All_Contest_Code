#include<stdio.h>
int main()
{
    int n,key,office
    scanf("%d %d",&n,&key,&office);
    int man[n],ark[key],up[n],down[n];
    for(i=0;i<n;i++){
        scanf("%d",&man[i]);
        if(man[i]>office){
            up[i]=office;
            down[i]=man[i];
         }
         else{
            up[i]=man[i];
            down[i]=office;
         }
    }
    for(i=0;i<key;i++){
        scanf("%d",&ark);
        if(ark[i]<up[i] && ark[i]>down[i]){
            sum=(down-up)+sum;
            continue;
        }
        else{
            x=(up[i]-ark)+(ark-down[i]);
            if(x<mean){
                mean=x;
            }
        }

    }
