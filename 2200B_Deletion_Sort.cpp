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
        vector<int>v(n);
        for(int x=0;x<n;x++){
            cin>>v[x];
        }
        vector<int>v1(n);v1=v;
        sort(v1.begin(),v1.end());
        if(v1==v){
            cout<<n<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}