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
        int b=0;
        int e=0;
        vector<int>v(n);
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(x==0){
                b=v[x];
                v[x]=n;
            }
            else if(v[x]==n){
                v[x]=b;
            }
        }
        // v[n-1]=b;
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}