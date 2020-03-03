#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<string> name;
    name.push_back("Rabat");
    name.push_back("Trishna");
    name.push_back("Rainum");
    name.push_back("Turjoy");
    for(i=0;i<name.size();i++) cout<<name[i]<<" ";
    cout<<endl;
    return 0;
}
