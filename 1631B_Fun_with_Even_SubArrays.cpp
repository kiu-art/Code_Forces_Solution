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
        int a=0;
        int b=v[n-1];
        int r=0;
        for(int x=n-1;x>=0;x--){
            if(v[x]==b){
                a++;
            }
            else{
                for(int y=x;y>x-a and y>=0;y--){
                    v[y]=b;
                    // cout<<y<<" ";
                }
                // cout<<endl<<x<<endl;
                // for(auto z:v){cout<<" "<<z;}
                // cout<<endl;
                r++;
                x-=a-1;
                a*=2;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}