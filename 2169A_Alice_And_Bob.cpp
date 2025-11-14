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
        int n,a;cin>>n>>a;
        vector<int> v(n);
        int c=0;
        int d=0;
        for(auto &x:v){
            cin>>x;
            if(x>a){
                d++;
            }
            if(x<a){
                c++;
            }
        }
        if(d>c){cout<<a+1<<"\n";}
        else{cout<<a-1<<"\n";}
    }
    return 0;
}