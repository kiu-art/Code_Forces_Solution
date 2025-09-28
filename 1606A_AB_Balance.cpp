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
        string s;cin>>s;
        int a=0;
        int b=0;
        int n=s.length();
        if(s[0]==s[n-1]){cout<<s;}
        else{s[0]='a';s[n-1]='a';cout<<s;}
        cout<<"\n";
    }
    return 0;
}