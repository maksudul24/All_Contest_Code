#include<stdio.h>
void recurse(int count)
{
    if(count>5){
        return;
    }
    printf("count: %d\n",count);
    if(count==5){
        printf("----------\n");
    }
    recurse(count+1);
    printf("Count: %d\n",count);
}
int main()
{
    recurse(1);
    return 0;
}
