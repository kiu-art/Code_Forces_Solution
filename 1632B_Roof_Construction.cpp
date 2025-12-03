// #include <bits/stdc++.h> 
// using namespace std; 
// #define int long long

// void fast_io() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     std::cout.tie(NULL);
// }

// signed main() {
//     fast_io(); 
//     int n;cin>>n;
//     vector<int>v(n);
//     for(auto &x:v){cin>>x;}
//     int r=0;
//     for(int x=0;x<n-1;x++){
//         r=max(r,v[x]^v[x+1]);
//     }
//     cout<<r;
//     return 0;
// }


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
        n--;
        int a=1;
        // cout<<"adas"<<endl;
        while(a<=n){
            a*=2;
        }
        a/=2; 
        for(int x=n;x>=a;x--){
            cout<<x<<" ";
        }
        cout<<0<<" ";
        for(int x=a-1;x>0;x--){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}