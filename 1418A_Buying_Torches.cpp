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
        int x,y,n;cin>>x>>y>>n;
        int e=((y+1)*n)-1;
        int f=(x-1);
        int u=bool(e%f>0);
        cout<<e/f+n+u<<endl;
    }
    return 0;
}