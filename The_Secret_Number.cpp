#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int x=0;x<n;x++){
    vector<string> o;
    int k=0;
    string a;
    cin>>a;
    int e=0;
    for(int y=0;y<=a.length()/2;y++){
        if(a[y]!=a[a.length()-1-y]){
            cout<<0;
            e=1;
            break;
        }
    }
    if(e!=1 and a[a.length()/2]%a[0]==0){
        for(int y=(a.length()/2);y>=1;y--){
            string f="";
            if(a.length()%y==0 and ((a.length()-y)/y)%2==1){
                for(int z=0;z<(a.length()-y)/y;z++){
                    if(z%2==0){
                        f+=a.substr(0,y);
                    }
                    else{
                        for(int j=0;j<y;j++){
                            f+="0";
                        }
                    }
                }
                k++;
                o.push_back(f);
            }
        }
    }
    if(o.size()!=0){cout<<k<<endl;for(auto x:o){cout<<x<<" ";}}
    cout<<endl;
  }
}