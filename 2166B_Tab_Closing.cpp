#include <bits/stdc++.h> 
using namespace std; 
#define int float

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int a,b,n;cin>>a>>b>>n;
        if(n*b<=a){cout<<1;}
        else if(a==b){
            cout<<1;
        }
        else{
            cout<<2;
        }
        cout<<endl;
    }
    return 0;
}