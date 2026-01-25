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
        vector<int>a(n);
        vector<int>b(n);
        for(auto &x:a){cin>>x;}
        for(auto &x:b){cin>>x;}
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int r=1;
        int c=0;
        for(int x=n-1;x>=0;x--){
            c=b[x];
            
        }
    }
    return 0;
}