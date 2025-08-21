#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int t=0;t<n;t++){
    int m,p;
    string a="";
    string b="";
    string c="";
    cin>>m;
    cin>>a;
    cin>>p;
    cin>>b>>c;
    for(int x=0;x<p;x++){
        if(c[x]=='V'){
            a=string(1,b[x])+a;
        }
        else{
            a+=string(1,b[x]);
        }
    }
    cout<<a<<endl;
  }
  
}