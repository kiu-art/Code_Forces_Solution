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
        int n,a;cin>>n>>a;
        vector<int>v(n);
        for(auto &x:v){cin>>x;}
        int r=0;
        int e=v[0];
        int f=v[0];
        for(int x=0;x<n;x++){
            if(v[x]>e){
                e=v[x];
            }
            if(v[x]<f){
                f=v[x];
            }
            if(e-f>2*a){
                r++;
                e=v[x];
                f=v[x];
            }
        }
        // sort(v.begin(),v.end());
        
        cout<<r<<endl;
    }
    return 0;
}