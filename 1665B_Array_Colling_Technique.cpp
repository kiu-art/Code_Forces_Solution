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
        map<int,int> m;
        int a;
        for(int x=0;x<n;x++){
            cin>>a;
            m.insert({a,0});
            m[a]++;
        }
        // for(auto x:m){
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }
        a=0;
        int b;
        for(auto x:m){
            if(x.second>a){
                b=x.first;
            }
        }
        cout<<(n-b)+(n-b);
    }
    return 0;
}