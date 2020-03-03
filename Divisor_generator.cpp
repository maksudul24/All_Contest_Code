#include<bits/stdc++.h>
using namespace std;

int ind=3;

void findFactors(int primeDivisors[], int multiplicity[], int currentDivisor,long long int currentResult) {
    if (currentDivisor == ind) {
        printf("%lld ",currentResult);
        return;
    }
    for (int i = 0; i <= multiplicity[currentDivisor]; i++) {
        findFactors(primeDivisors, multiplicity, currentDivisor + 1, currentResult);
        currentResult *= primeDivisors[currentDivisor];
    }
}

int gcd(ll int a,ll int b)
 {
     ll int x, gcd;
     if (a < b) {
         x = a;
     }
     else {
         x = b;
     }
     for(; x >= 1; x--) {
         if (a % x == 0 && b % x == 0) {
             gcd = x;
             break;
         }
     }
     return gcd;
 }

int main()
{
    int ts,cas=0,ara[]={2,3,5},muli[]={1,2,2};
    findFactors(ara,muli,0,1);
    return 0;
}
