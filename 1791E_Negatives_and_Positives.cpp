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
        int r=0;
        int a=0;
        for(auto &x:v){
            cin>>x;
            if(x<0){
                a++;
            }
            x=abs(x);
            r+=x;
        }
        sort(v.begin(),v.end());
        if(a%2==1){
            cout<<r-(2*v[0])<<endl;
        }
        else{
            cout<<r<<endl;
        }
    }
    return 0;
}