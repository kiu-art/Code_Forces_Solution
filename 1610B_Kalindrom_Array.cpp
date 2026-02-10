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
    for(int u=1;u<=t;u++){
        int n;cin>>n;
        vector<int>v(n);
        for(int x=0;x<n;x++){
            cin>>v[x];
        }
        // if(u==51){
        //     for(auto x:v){
        //         cout<<x;
        //     }
        // }
        int e=1;
        int a,b;
        for(int x=0;x<n;x++){
            if(v[x]!=v[n-1-x]){
                a=v[x];
                e=0;
                b=v[n-1-x];
                break;
            }
        }
        if(e){
            cout<<"YES"<<endl;
            continue;
        }
        vector<int>v1;
        vector<int>v2;
        for(int x=0;x<n;x++){
            if(v[x]!=a){
                v1.push_back(v[x]);
            }
            if(v[x]!=b){
                v2.push_back(v[x]);
            }
        }
        int i=v1.size();
        for(int x=0;x<i/2;x++){
            if(v1[x]!=v1[i-1-x]){
                e=1;
                // cout<<v1[x]<<"asd"<<v1[i-1-x];
                break;
            }
        }
        // for(auto x:v1){
            //     cout<<x<<" ";
            // }
        if(e==0){
            cout<<"YES"<<endl;
            continue;
        }
        e=0;
        i=v2.size();
        for(int x=0;x<i/2;x++){
            if(v2[x]!=v2[i-1-x]){
                e=1;
                // cout<<v2[x]<<"asd"<<v2[i-1-x];
                break;
            }
        }
        if(e==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}