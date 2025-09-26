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
        int a,b,c;cin>>a>>b>>c;
        int ra=2*b-c;
        int rb=a+c;
        int rc=2*b-a;
        // cout<<ra<<" "<<rb<<" "<<" "<<rc;
        if(ra%a==0 and ra>=a){
            cout<<"YES\n";continue;
        }
        if(rb%(2*b)==0 and rb>=b){
            cout<<"YES\n";continue;
        }
        if(rc%c==0 and rc>=c){
            cout<<"YES\n";continue;
        }
        else{cout<<"NO\n";}
    }
    return 0;
}