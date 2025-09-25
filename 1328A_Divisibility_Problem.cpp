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
        int a,b;cin>>a>>b;
        if(a%b==0){
            cout<<"0\n";
            continue;
        }
        cout<<b-(a%b)<<"\n";
    }
    return 0;
}