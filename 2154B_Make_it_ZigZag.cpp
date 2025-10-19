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
        int a=v[0]-1;
        int res=(1)*bool(v[0]>=v[1]);
        for(int x=0;x<n-1;x++){
            if(v[x]>a){
                a=v[x];
            }
            if(x%2==1){
                if(a<=v[x+1]){
                    res+=v[x+1]-a+1;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}