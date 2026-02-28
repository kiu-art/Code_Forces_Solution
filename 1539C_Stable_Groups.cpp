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
    int n,k,a;cin>>n>>k>>a;
    vector<int>v(n);
    for(int x=0;x<n;x++){
        cin>>v[x];
    }
    sort(v.begin(),v.end());
    vector<int>v1;
    // cout<<endl;
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    for(int x=0;x<n-1;x++){
        int b=v[x+1]-v[x];
        if(b>a){
            int c=(b/a)-bool((b%a)==0);
            v1.push_back(c);
            // cout<<c<<" ";
        }
    }
    // cout<<endl;
    // for(auto x:v1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    sort(v1.begin(),v1.end());
    int r=v1.size()+1;
    for(auto x:v1){
        if(k>=x){
            k-=x;
            r--;
        }
        else{
            break;
        }
    }
    cout<<r<<endl;
    return 0;
}