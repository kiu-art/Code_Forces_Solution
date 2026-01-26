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
//     int t;cin>>t;
//     while(t--){
//         int n;cin>>n;
//         vector<int>v(n);
//         for(auto &x:v){cin>>x;}
//         int a=0;
//         int b=0;
//         int e=0;
//         if(v[0]!=0 and v[n-1]!=0){
//             b=bool((max(v[0],v[n-1])%min(v[0],v[n-1]))==0)*min(v[0],v[n-1]);
//         }
//         for(int x=0;x<n;x++){
//             if(a==0){
//                 a=max(v[x],v[n-1-x])-min(v[x],v[n-1-x]);
//                 // b=bool(max(v[x],v[n-1-x])%min(v[x],v[n-1-x]))*min(v[x],v[n-1-x]);
//             }
//             else if(v[x]%a==v[n-1-x]%a){continue;}
//             else{
//                 if(b!=0 and v[x]%b==v[n-1-x]%b){
//                     // cout<<"khj"<<endl;
//                     e=1;
//                     continue;
//                 }
//                 a=1;
//                 break;
//             }
//         }
//         if(e){cout<<b<<endl;}
//         else{
//             cout<<a<<endl;
//         }
//     }
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
        vector<int>v(n);
        set<int>s;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(x>=n/2){
                s.insert(abs((v[x]-v[n-1-x])));
            }
        }
        int a=v[0]-v[n-1];
        if(s.size()==1 and a==0){
            cout<<0<<endl;
            continue;
        }
        int r=0;
        for(auto x:s){
            r=__gcd(r,x);
        }
        cout<<r<<endl;
    }
    return 0;
}