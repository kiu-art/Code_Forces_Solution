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
    int mod=1e9+7;
    // cout<<mod;
    while(t--){
        int n,k;cin>>n>>k;
        int r=1;
        while(k){
            r=(n*r)%mod;
            // cout<<r<<" ";
            k--;
        }
        cout<<r<<endl;
    }
    return 0;
}