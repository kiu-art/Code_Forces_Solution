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
        int min=0;
        int a=0;
        int max=0;
        for(int x=0;x<n;x++){
            cin>>a;
            min+=a;
            max+=a/m+bool(a%m);
        }
        cout<<(min/m)+bool(min%m)<<" "<<max<<endl;
    }
    return 0;
}