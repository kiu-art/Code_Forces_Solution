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
    int n;cin>>n;
    string s="";
    for(int x=1;x<=n;x++){
        if(x%2==1){
            s+="I hate ";
        }
        else{
            s+="I love ";
        }
        if(x!=n){
            s+="that ";
        }
    }
    cout<<s<<"it";
    return 0;
}