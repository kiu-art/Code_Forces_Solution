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
        for(auto &x:v){cin>>x;}
        sort(v.rbegin(),v.rend());
        for(auto x:v){cout<<x<<" ";}
        cout<<endl;
    }
    return 0;
}