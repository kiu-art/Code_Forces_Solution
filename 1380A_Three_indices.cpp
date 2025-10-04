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
        int e=0;
        vector<int> v(n,0);
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(e==0 and x>1 and v[x-1]>v[x-2] and v[x-1]>v[x]){
                cout<<"YES\n"<<x-1<<" "<<x<<" "<<x+1<<"\n";
                e=1;
            }
        }
        if(e==0){cout<<"NO\n";}
    }
    return 0;
}