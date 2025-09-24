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
        vector<int> v(m);
        int a=0;
        for(int x=0;x<m;x++){
            cin>>v[x];
            if(v[x]>a){
                a=x;
            }
        }
        if(v[a]>=v.size() and v.size()-1==a){
            cout<<n-v[a]+1;
        }
        else{
            cout<<1;
        }
        cout<<"\n";
    }
    return 0;
}