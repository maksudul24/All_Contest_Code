#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> divisor[10000002];

void fun(int n)
{
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j+=i){
            divisor[j].push_back(i);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("The divisor of %d\n",n);
    fun(n);
    for(int i=0;i<divisor[n].size();i++)
    printf("%d ",divisor[n][i]);
    cout<<endl;
}
