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
        int a;
        int e=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if((x)!=v[x]){
                if(e==0){
                    a=v[x];
                    e=1;
                }
                else{
                    a=a&v[x];
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}