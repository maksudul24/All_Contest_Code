#include<bits/stdc++.h>
#define MAX 1000010
#define FO freopen("out.txt","w",stdout);
using namespace std;


int failure[MAX];

void build_failure_function(string pattern, int m) {
  failure[0] = 0;
  failure[1] = 0; //base case

  for(int i = 2; i <= m; i++) {  //i is length of the prefix we are dealing with
    // j is the index of the largest next partial match
    // (the largest suffix/prefix) of the string under index i - 1
    int j = failure[i - 1];
    while(true) {
      // check if the last character of prefix of length i "expands" the current "candidate"
      if(pattern[j] == pattern[i - 1]) {
        failure[i] = j + 1;
        break;
      }
      // if we cannot "expand" even the empty string
      if(j == 0) {
          failure[i] = 0;
          break;
      }
      // else go to the next best "candidate" partial match
      j = failure[j];
    }
  }
}
int main()
{
    int cas=0,ts,i,n;
    char str[MAX];
   //  freopen("in.txt","r",stdin),FO;
    scanf("%d",&ts);
    getchar();
    while(ts--){
        scanf("%s",str);
        n=strlen(str);
        build_failure_function(str,n);
        for(i=0;i<n;i++){
            cout<<str[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<n;i++){
            cout<<failure[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
