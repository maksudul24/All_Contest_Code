#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char ara1[3][100]={"bangladesh","dhaka","Mymensingh"};
    char ara2[3][100]={"bangladesh","dhaka","Mymensingh"};
    l=strcmp(ara1,ara2);
    printf("%d\n",l);
    return 0;
}
