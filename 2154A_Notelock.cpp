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
        string s;cin>>s;
        deque<char> v(k-1,'0');
        int res=0;
        for(int x=0;x<n;x++){
            if(s[x]=='1' and count(v.begin(),v.end(),'0')==k-1){
                res++;
            }
            v.pop_front();
            v.push_back(s[x]);
        }
        cout<<res<<"\n";
    }
    return 0;
}