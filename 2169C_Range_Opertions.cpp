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
        int a=0;
        int b=1;
        int c=1;
        for(int x=1;x<=n;x++){
            cin>>v[x-1];
            a+=v[x-1];
            if(a>=(n)*(x-b)){
                c=b;
                b=x;
                if(c==1){
                    
                }
            }
        }
    }
    return 0;
}