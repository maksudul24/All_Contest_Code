#include<bits/stdc++.h>
using namespace std;

int length;

void findFactors(int primeDivisors[], int multiplicity[], int currentDivisor, long currentResult) {
    if (currentDivisor == length) {
        // no more balls
        printf("%lld\n",currentResult);
        return;
    }
    // how many times will we take current divisor?
    // we have to try all options
    for (int i = 0; i <= multiplicity[currentDivisor]; ++i) {
        findFactors(primeDivisors, multiplicity, currentDivisor + 1, currentResult);
        currentResult *= primeDivisors[currentDivisor];
    }
}
int main()
{
    int ara[]={2,3,5},mul[]={2,1,1};
    length=2;
    findFactors(ara,mul,0,1);
    return 0;


}
