#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std; 
#define int long long
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
signed main(){
  fast_io();
  int n;
  cin>>n;
  for(int x=0;x<n;x++){
    int a;cin>>a;
    vector<int> v;
    for(int y=1;y<100;y++){
        int d=1;
        for(int z=0;z<y;z++){d*=10;}
        d+=1;
        int e=a%d;
        if(e==0){
            v.push_back(a/d);
        }
        if(a/d<1){break;}
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<"\n";
    if(v.size()!=0){
    for(auto y:v){cout<<y<<" ";}
    cout<<"\n";}
  }
}