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
        int r=1;
        int m=sqrt(n);
        for(int x=2;x<=m;x++){
            if(n%x==0){r*=x;}
            while(n%x==0){
                n/=x;
            }
            if(n==0){break;}
        }
        if(n!=0){r*=n;}
        // for(auto x:s){r*=x;}
        cout<<r<<endl;
    }
    return 0;
}