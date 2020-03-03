#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Queue\n";
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"Stack\n";
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<"Priority_queue\n";
    priority_queue<int>pq;
    pq.push(1);
    pq.push(4);
    pq.push(5);
    pq.push(3);
    pq.push(12);
    pq.push(2);
    pq.push(7);
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<"Iterator of vector\n";
    vector<int> v;
    vector<int>::iterator j;
    v.push_back(12);
    v.push_back(13);
    v.push_back(2);
    v.push_back(5);
    v.push_back(10);
    for(j=v.begin();j<v.end();j++){
        printf("%d\n",*j);
    }
    cout<<"Sorted vector\n";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
    return 0;
}
