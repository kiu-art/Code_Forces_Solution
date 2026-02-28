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
//         for(int x=0;x<n;x++){
//             cin>>v[x];
//         }
//         int r=0;
//         for(int x=0;x<n;x++){
//             for(int y=x;y<n;y++){
//                 if(v[x]*v[y]==x+y+2){
//                     r++;
//                 }
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
        int n;cin>>n;
        vector<pair<int,int>>v(n);
        for(int x=0;x<n;x++){
            int a;cin>>a;
            v[x].first=a;
            v[x].second=x+1;
        }
        int r=0;
        sort(v.begin(),v.end());
        for(int x=0;x<n;x++){
            for(int y=x+1;y<n;y++){
                if(v[x].first*v[y].first>2*n){
                    break;
                }
                if(v[x].first*v[y].first==v[x].second+v[y].second){
                    r++;
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}