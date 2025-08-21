#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> a(25,0);
  int b;
  for(int x=0;x<25;x++){
    cin>>a[x];
    if(a[x]==1){b=x;}
    }
  cout<<abs(((b)/5)-2)+abs((b%5)-2);
}