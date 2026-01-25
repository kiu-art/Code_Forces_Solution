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
//         int n,k;cin>>n>>k;
//         vector<int>v(n);
//         int r=0;
//         for(auto &x:v){cin>>x;r+=x;}
//         sort(v.begin(),v.end());
//         int y=0;
//         for(int x=0;x<k;x++){
//             if(v[y+0]+v[y+1]<v[n-1]){
//                 r-=v[y+0]+v[y+1];
//                 y+=2;
//             }
//             else{
//                 r-=v[n-1];
//                 n--;
//             }
//         }
//         cout<<r<<endl;
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
        int n,k;cin>>n>>k;
        vector<int>v1(n);
        int r=0;
        for(auto &x:v1){cin>>x;r+=x;}
        sort(v1.begin(),v1.end());
        vector<int>v2(n);
        v2[0]=v1[0];
        for(int x=1;x<n;x++){
            v2[x]=v2[x-1]+v1[x];
        }
        int a=0;
        int b=0;
        for(int x=0;x<k;x++){
            b=v2[n-x-1]-v2[((k-x)*2)-1];
            if(b>a){
                a=b;
            }
        }
        cout<<max(a,v2[n-k-1])<<endl;
    }
    return 0;
}