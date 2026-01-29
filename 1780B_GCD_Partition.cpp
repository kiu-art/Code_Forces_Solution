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
        int r=0;
        for(auto &x:v){
            cin>>x;
            r+=x;
        }
        int b=0;
        int c=0;
        int e=0;
        for(int x=0;x<n-1;x++){
            b+=v[x];
            c=__gcd((r-b),b);
            if(c>e){
                e=c;
            }
        }
        cout<<e<<endl;
    }
    return 0;
}