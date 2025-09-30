#include <bits/stdc++.h> 
#include <vector>   
#include <algorithm> 
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
        int n,q;cin>>n>>q;
        int e=0;
        map<int,vector<int>> m;
        for(int x=0;x<n;x++){
            int l;cin>>l;
            int a;
            for(int y=0;y<l;y++){
                cin>>a;
                m[a].push_back(x);
            }
        }
        int r=0;
        set<int>unique;
        for(int x=1;x<=q;x++){
            if(m[x].size()==1){
                unique.insert(m[x][0]);
            }
            else if(m[x].size()==0){
                r++;
                break;
            }
        }
        if(n-unique.size()<2  or r==1){cout<<"NO\n";continue;}
        cout<<"YES\n";
    }
    return 0;
}