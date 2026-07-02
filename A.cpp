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
        for(int x=0;x<n;x++){
            cin>>v[x];
            a=a^v[x];
        }
        if(a==0){
            cout<<"YES"<<endl;
        }
        int e=0;
        for(int x=0;x<n;x++){
            if(a==v[x]){
                cout<<"YES"<<endl;
                e=1;
                break;
            }
        }
        if(e==0){
            cout<<"No"<<endl;
        }
    }
    return 0;
}