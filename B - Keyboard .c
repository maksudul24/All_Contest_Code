#include<stdio.h>
#include <stdlib.h>
#include<string.h>


int cmp( const void *lhs, const void *rhs )
{
if ( *( const int * )lhs < *( const int * )rhs ) return -1;
else if ( *( const int * )rhs < *( const int * )lhs ) return 1;
else return 0;
}
int main()
{
    int ara[500],i,n,ind,*p;
    char x,line[101];
    ara['q']=1;
    ara['w']=2;
    ara['e']=3;
    ara['r']=4;
    ara['t']=5;
    ara['y']=6;
    ara['u']=7;
    ara['i']=8;
    ara['o']=9;
    ara['p']=10;
    ara['a']=11;
    ara['s']=12;
    ara['d']=13;
    ara['f']=14;
    ara['g']=15;
    ara['h']=16;
    ara['j']=17;
    ara['k']=18;
    ara['k']=19;
    ara['l']=20;
    ara[';']=21;
    ara['z']=22;
    ara['x']=23;
    ara['c']=24;
    ara['v']=25;
    ara['b']=26;
    ara['n']=27;
    ara['m']=28;
    ara[',']=29;
    ara['.']=30;
    ara['/']=31;
    scanf("%c",&x);
    if(x=='R'){
        scanf("%s",line);
        n=strlen(line);
        for(i=0;i<n;i++){
            ind=ara[line[i]]-1;
            *p = ( int * )bsearch( &ind, ara, 500, sizeof( int ), cmp );

              line[i]=p-ara;
        }
        line[n]='\0';
    }
    else{
        scanf("%s",line);
        n=strlen(line);
        for(i=0;i<n;i++){
            ind=ara[line[i]]+1;
            *p = ( int * )bsearch( &ind, ara, 500, sizeof( int ), cmp );

            line[i]=p-ara;
        }
        line[n]='\0';
    }
    printf("%s\n",line);
    return 0;
}
