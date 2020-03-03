#include<stdio.h>
int main()
{
    printf("Enter  line of text\n");
    printf("EOF to stpo.\n");

    count=getchar();
    while(count != EOF){
        count=getchar();
    }
    return 0;
}
