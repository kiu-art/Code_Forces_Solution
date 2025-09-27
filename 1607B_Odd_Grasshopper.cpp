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
        int x,n;cin>>x>>n;
        if(abs(x)%2==1){
            if(n%4==0)cout<<x;
            else if(n%4==1)cout<<x+n;
            else if(n%4==2)cout<<x-1;
            else{cout<<x-1-n;}
        }
        else{
            if(n%4==0)cout<<x;
            else if(n%4==1)cout<<x-n;
            else if(n%4==2)cout<<x+1;
            else{cout<<x+n+1;}
        }
        cout<<"\n";
    }
    return 0;
}