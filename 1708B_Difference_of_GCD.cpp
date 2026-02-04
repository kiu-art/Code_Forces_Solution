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
        int n,l,r;cin>>n>>l>>r;
        string s="";
        int e=0;
        for(int x=1;x<=n;x++){
            if(((l/x)+bool(l%x))*x<=r){
                s+=to_string(((l/x)+bool(l%x))*x);
                s+=" ";
            }
            else{
                e=1;
                break;
            }
        }
        if(e==0){
            cout<<"YES"<<endl<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}