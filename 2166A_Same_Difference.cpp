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
        int n;string s;cin>>n>>s;
        char a=s[n-1];
        int r=0;
        for(auto x:s){
            if(x!=a){
                r++;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}