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
        int a,b;cin>>a>>b;
        vector<int>v1(a);
        vector<int>v2(b);
        vector<int>v3;
        for(int x=0;x<a;x++){
            cin>>v1[x];
            if(v1[x]%2==0){
                v3.push_back(x);
            }
        }
        int f=100;
        for(auto &x:v2){
            cin>>x;
            int y=pow(2,x);
            if(x<f){
                f=x;
                for(auto z:v3){
                    // cout<<y<<" ";
                    if(v1[z]%y==0){
                        v1[z]+=y/2;
                    }
                }
            }
        }
        // for(auto x:v3){
        //     cout<<x<<" ";
        // }
        for(auto x:v1){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}