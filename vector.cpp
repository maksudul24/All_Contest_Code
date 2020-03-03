#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector <int> ara,cop;
    ara.push_back(10);
    ara.push_back(20);
    ara.push_back(30);
    cop=ara;
    for(i=0;i<ara.size();i++) cout<<cop[i]<<" ";
    cout<<endl;
    return 0;
}
