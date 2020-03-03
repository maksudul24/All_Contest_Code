#include<bits/stdc++.h>
#define FI freopen("in.txt","r",stdin)
using namespace std;


 void prnt(vector<int> ar)
 {
     cout<<"."<<endl;
      vector<int>::iterator ptr;
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";
    cout<<endl;
 }
int main() {
    int n,m,i,x,a,b,len,st,en;
  //  FI;
    vector<int> ara;
    vector<int> temp;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        ara.push_back(x);
    }
    len=ara.size();
    for(i=0;i<m;i++){
        scanf("%d %d %d",&x,&a,&b);
        if(x==1){
            temp.insert(temp.begin(),ara.begin()+a-1,ara.begin()+(b-a));
            prnt(temp);
            temp.insert(temp.end(),ara.begin(),ara.begin()+a-1);
            prnt(temp);
           temp.insert(temp.end(),ara.begin()+b,ara.end());
            prnt(temp);
            ara.clear();
            ara.insert(ara.begin(),temp.begin(),temp.end());
            temp.clear();
            prnt(ara);
        }
        else{
           temp.insert(temp.begin(),ara.begin()+b,ara.end());
            prnt(temp);
            temp.insert(temp.end(),ara.begin(),ara.begin()+a-1);
            prnt(temp);
             temp.insert(temp.end(),ara.begin()+a-1,ara.end()-b);
            prnt(temp);
            ara.clear();
            ara.insert(ara.begin(),temp.begin(),temp.end());
            temp.clear();
            prnt(ara);
        }
    }
  /*  x=abs(ara[0]-ara[len-1]);
    printf("%d\n",x);
    for(i=0;i<len;i++){
        cout<<ara[i]<<" ";
    }
    cout<<endl; */
    return 0;
}
