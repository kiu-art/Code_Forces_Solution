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
        int n,a,b;cin>>n>>a>>b;
        int r=a;
        int i=a;
        for(int x=0;x<n;x++){
            i+=b;
            i%=n;
            if(i==a){
                break;
            }
            else if(i>r){
                r=i;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}