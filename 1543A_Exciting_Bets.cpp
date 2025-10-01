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
        int gcd=abs(a-b);
        if(gcd==0){cout<<"0 0\n";continue;}
        int res=min(max(a,b)%gcd,gcd-(max(a,b)%gcd));
        cout<<gcd<<" "<<res<<endl;
    }
    return 0;
}