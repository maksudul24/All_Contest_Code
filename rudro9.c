#include <stdio.h>
int main ()
{
    char chr;
    chr='a';
    if(chr>='a'&&chr<='z'){
        printf("chr is lower case\n");
    }
    else if (chr>='A'&&chr<='Z'){
        printf("chr is upper case\n");
    }
    return 0;
}
