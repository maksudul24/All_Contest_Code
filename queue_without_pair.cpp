#include<iostream>
#include <queue>
#include<cstdio>
using namespace std;
struct S
{
    int m_n1;
    int m_n2;
    int m_n3;

    S(int n1, int n2, int n3) : m_n1(n1), m_n2(n2), m_n3(n3)
    {
    }

};

int main()
{
    queue<S> pq;

    //Add the elements to the queue
    pq.push(S(1,2,3));
    pq.push(S(4,2,3));
    pq.push(S(2,2,3));

    //This element will be S(4,2,3)
    S s1 = pq.front();
    pq.pop();
    pq.pop();
    s1=pq.front();
    printf("%d %d %d\n",s1.m_n1,s1.m_n2,s1.m_n3);
    pq.pop();

    return 0;
}

