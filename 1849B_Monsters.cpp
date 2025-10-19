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
        int b=0;
        map<int,string> v;
        for(int x=1;x<=n;x++){
            cin>>b;
            int c=a-(b%a);
            if(c==a){
                v[0]+=to_string(x);
                v[0]+=" ";
                continue;
            }
            v[c]+=to_string(x);
            v[c]+=" ";
        }
        for(auto x:v){
            cout<<x.second;
        }
        cout<<"\n";
    }
    return 0; 
}