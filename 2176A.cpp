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
        vector<int>v(n);
        int r=0;
        int a=0;
        for(auto &x:v){
            cin>>x;
            if(x>=a){
                a=x;
            }
            else{
                r++;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}