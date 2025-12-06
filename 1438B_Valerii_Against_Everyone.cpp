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
        set<int>s;
        int e=0;
        int b=0;
        for(int x=0;x<n;x++){
            int a;cin>>a;
            if(!e){
                s.insert(a);
                if(s.size()==b){
                    e=1;
                }
                b=s.size();
            }
        }
        if(!e){cout<<"NO\n";}
        else{cout<<"YES\n";}
    }
    return 0;
}