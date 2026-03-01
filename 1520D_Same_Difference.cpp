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
        map<int,int>m;
        for(int x=1;x<=n;x++){
            int a;cin>>a;
            int c=a-x;
            m[c]++;
        }
        int r=0;
        for(auto x:m){
            int c=x.second*(x.second-1)/2;
            r+=c;
        }
        cout<<r<<endl;
    }
    return 0;
}