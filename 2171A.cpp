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
        int a=n/4;
        int r=a+1;
        if(n%2==1){
            cout<<0<<endl;
            continue;
        }
        cout<<r<<endl;
    }
    return 0;
}