#include<bits/stdc++.h>
#define SIZE 10000000
using namespace std;

int N =SIZE,prime[SIZE];
int status[SIZE/32];
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
void sieve()
{
     int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(status[i/32],i%32)==0)
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 status[j/32]=Set(status[j/32],j % 32)   ;
	 		 }
		 }
	 }
	 puts("2");
	 for(i=3;i<=N;i+=2)
		 if( Check(status[i/32],i%32)==0)
	 	 printf("%d\n",i);

}

int main()
{
    sieve();
    return 0;
}
