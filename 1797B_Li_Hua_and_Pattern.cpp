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
        vector<vector<int>>v1(n,vector<int>(n));
        vector<vector<int>>v2(n,vector<int>(n));
        int b=0;
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                cin>>v1[x][y];
                if(v1[x][y]==1){b++;}
                v2[n-x-1][n-y-1]=v1[x][y];
            }
        }
        int r=0;
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                if(v1[x][y]!=v2[x][y]){
                    r++;
                }
            }
        }
        // for(auto x:v1){
        //     for(auto y:x){
        //         cout<<y;
        //     }
        //     cout<<endl;
        // }
        // for(auto x:v2){
        //     for(auto y:x){
        //         cout<<y;
        //     }
        //     cout<<endl;
        // }
        // cout<<r<<endl;
        r/=2;
        if(r>k){
            cout<<"NO"<<endl;
        }
        else if((k-r)%2==1 and n%2==0){
            cout<<"NO"<<endl;
        }
        // else if(b==0 or b==n*n){
        //     if(k%2==1 and n!=1){
        //         cout<<"NO"<<endl;
        //     }
        //     else{
        //         cout<<"YES"<<endl;
        //     }
        // }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}