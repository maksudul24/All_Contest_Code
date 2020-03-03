#include <stdio.h>
#include <stdlib.h>


int cmp( const void *lhs, const void *rhs )
{
if ( *( const int * )lhs < *( const int * )rhs ) return -1;
else if ( *( const int * )rhs < *( const int * )lhs ) return 1;
else return 0;
}

int main()
{


    *p = ( int * )bsearch( &ind, a, 3, sizeof( int ), cmp );

    line[i]=p-a;
}
