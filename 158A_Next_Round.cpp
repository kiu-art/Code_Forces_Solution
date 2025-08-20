#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int a=0;
  vector<int> vec(n);
  
  for(auto &a:vec){cin>>a;}
  for(int x=0;x<n;x++){
    if(vec[x]>=vec[k-1] and vec[x]!=0){
      a++;
    }
    else{break;}
  }
  cout<<a;
}