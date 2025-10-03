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
        set<int>v;
        int b=0;
        for(int x=0;x<n;x++){
            cin>>b;
            v.insert(b);
        }
        cout<<(v.size()*2)-1<<endl;
    }
    return 0;
}