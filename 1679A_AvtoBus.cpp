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
        if(n%2==1 or n<4){
            cout<<"-1\n";
            continue;
        }
        cout<<(n/6)+bool(n%6!=0)<<" "<<n/4<<"\n";
    }
    return 0;
}