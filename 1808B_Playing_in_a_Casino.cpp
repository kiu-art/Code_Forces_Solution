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
        int n,m;cin>>n>>m;
        vector<vector<int>>v(m,vector<int>(n));
        for(int x=0;x<n;x++){
            for(int y=0;y<m;y++){
                cin>>v[y][x];
            }
        }
        int r=0;;
        for(auto x:v){
            sort(x.rbegin(),x.rend());
            for(int y=0;y<n;y++){
                r+=((n-1-y)-y)*x[y];
            }
        }
        cout<<r<<endl;
    }
    return 0;
}