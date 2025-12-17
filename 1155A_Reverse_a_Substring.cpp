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
    string s;cin>>s;
    int e=0;
    for(int x=0;x<n-1;x++){
        if(s[x]>s[x+1]){
            cout<<"YES\n";
            cout<<x+1<<" "<<x+2<<endl;
            e=1;
            break;
        }
    }
    if(e==0){cout<<"NO"<<endl;}
    return 0;
}