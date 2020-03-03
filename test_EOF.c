#include<stdio.h>
int main(){
    long int n;
    n=0;
    while(getchar()!=EOF){
        ++n;
        printf("%ld\n");
    }
    return 0;
}
