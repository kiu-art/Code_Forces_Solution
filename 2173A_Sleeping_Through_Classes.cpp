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
        int n,k;cin>>n>>k;
        int e=0;
        int r=0;
        for(int x=0;x<n;x++){
            char a;cin>>a;
            if(a=='1'){
                e=k;
            }
            else if(e==0){
                r++;
            }
            else{e--;}
        }
        cout<<r<<endl;
    }
    return 0;
}