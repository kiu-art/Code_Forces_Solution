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
        for(auto &x:v){
            cin>>x;
        }
        int res=0;
        sort(v.begin(),v.end());
        for(int x=0;x<n;x+=2){
            if(v[x+1]-v[x]>res){
                res=v[x+1]-v[x];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}