#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i;
    int ara[]={1,2,4,1,12,16,5,3,2};
    sort(ara,ara+10);
    for(i=0;i<9;i++){

        printf("%d ",ara[i]);
    }
    return 0;
}
