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
        vector<int>v(n);
        int a=0;
        int b=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(v[x]>a){
                a=v[x];
                b=1;
            }
            else if(v[x]==a){
                b++;
            }
        }
        cout<<b<<endl;
    }
    return 0;
}