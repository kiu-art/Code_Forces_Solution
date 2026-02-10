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
        for(auto &x:v){
            cin>>x;
        }
        int a=2;
        int b=0;
        for(int y=0;y<60;y++){
            set<int>s;
            for(int x=0;x<n;x++){
                s.insert(v[x]%a);
            }
            if(s.size()==2){
                b=a;
                break;
            }
            a*=2;
        }
        cout<<b<<endl;
    }
    return 0;
}