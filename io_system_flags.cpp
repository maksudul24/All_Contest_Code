#include<iostream>
using namespace std;
int main()
{
    cout.setf(ios::uppercase | ios::scientific);
    cout<<102.0012<<endl;
    cout.unsetf(ios::uppercase);
    cout<<102.0012<<endl;
    cout.unsetf(ios::scientific);
    cout<<102.0012<<endl;
    return 0;

}
