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
        set<int>ss;
        vector<vector<int>>v(n,vector<int>(3000,0));
        for(int x=0;x<n;x++){
            int m;cin>>m;
            vector<int>v1(m);
            for(int y=0;y<m;y++){
                cin>>v1[y];
                ss.insert(y);
            }
            set<int>s;
            int k=0;
            for(int y=m-1;y>=0;y--){
                s.insert(v1[y]);
                if(s.size()!=k){
                    v[x][k-1]=v1[y];
                }
            }
        }
        sort(v.begin(),v.end());
        for(auto s:)

    }
    return 0;
}