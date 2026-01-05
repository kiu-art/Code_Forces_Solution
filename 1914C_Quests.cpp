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
        int n,k;cin>>n>>k;
        vector<int>v(n);
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        int r=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
        }
        for(int x=0;x<n;x++){
            cin>>a;
            if(k==0){
                continue;
            }
            if(a>b){
                b=a;
            }
            c+=v[x];
            k--;
            // cout<<c<<" "<<k<<endl;
            d=c+(b*k);
            if(d>r){
                r=d;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}