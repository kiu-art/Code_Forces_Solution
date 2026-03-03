#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>v;
        for(int x=0;x<n;x++){
            int a;cin>>a;
            for(int y=33;y>=0;y--){
                if(a>=pow(2,y)){
                    v[y]++;
                    break;
                }
            }
        }
        int r=0;
        for(auto x:v){
            if(x.second>1){
                r+=(x.second*(x.second-1))/2;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}