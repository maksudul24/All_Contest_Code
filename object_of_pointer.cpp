#include<iostream>
using namespace std;
class base{
    int x;
 public:
    void setx(int i) { x=i;}
    int getx(){ return x;}
};
class derived : public base{
    int y;
public:
    void sety(int i){ y=i; }
    int gety() { return y;}
};
int main()
{
    derived *p;
    base ob_b;
    derived ob_d;
    p=&ob_d;
    p->sety(20);
    cout<<"Derived object: "<<p->gety()<<endl;

}
