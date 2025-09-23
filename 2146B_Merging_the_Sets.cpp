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
vector<set<int>>input(int n){
    vector<set<int>> v;
    for(int x=0;x<n;x++){
        int a;cin>>a;
        set<int>s;
        int b;
        for(int y=0;y<a;y++){
            cin>>b;
            s.insert(b);
        }
        v.push_back(s);
    }
    return v;
}
signed main() {
    fast_io();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<set<int>>v=input(n);
        
    }
    return 0;
}