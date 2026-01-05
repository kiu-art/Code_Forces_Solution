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
        int a=1000000000;
        int b;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(v[x]<a){
                b=a;
                a=v[x];
            }
            else if(v[x]<b){
                b=v[x];
            }
        }
        // cout<<b<<" "<<a<<"   ";
        if(b-a>=a){
            cout<<b-a;
        }
        else{
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}