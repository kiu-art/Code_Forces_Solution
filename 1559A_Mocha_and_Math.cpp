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
        vector<int> v(n);
        int min;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(x==0)min=v[x];
            min&=v[x];
        }
        cout<<min<<endl;
    }
    return 0;
}