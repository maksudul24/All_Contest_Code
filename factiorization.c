#include<stdio.h>
#include<bits/stdc++.h>
#include<vector.h>
vector <int> div[1000000];
void div(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=i;j<=n;j+=i)
            div[j].push.back(i);
}
int main()

