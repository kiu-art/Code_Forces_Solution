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
    int a,b,c;cin>>a>>b>>c;
    int x=min(a,min(b,c));
    int y=max(a,max(b,c));
    if(y-x>=10){cout<<"check again";}
    else{
        int z=a+b+c;
        z=z-x-y;
        cout<<"final "<<z;
    }
    return 0;
}