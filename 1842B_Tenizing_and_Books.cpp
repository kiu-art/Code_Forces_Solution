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
        vector<int>r;
        vector<int>v;
        while(r){
            r[x].push_back(r%2);
            r/=2;
        }
        for(int x=v.size()-1;x>=0;x--){
            if(r[x]==0){
                v.push_back(x);
            }
        }
        vector<pair<int,int>>v1(n);
        vector<pair<int,int>>v2(n);
        vector<pair<int,int>>v3(n);
        for(int x=0;x<n;x++){
            int a;cin>>a;
            while(a){
                v1[x].push_back(a%2);
                a/=2;
            }
        }
        for(int x=0;x<n;x++){
            int a;cin>>a;
            while(a){
                v2[x].push_back(a%2);
                a/=2;
            }
        }
        for(int x=0;x<n;x++){
            int a;cin>>a;
            while(a){
                v3[x].push_back(a%2);
                a/=2;
            }
        }
        int e=0;
        while(e){
            if(v[x])
        }
    }
    return 0;
}