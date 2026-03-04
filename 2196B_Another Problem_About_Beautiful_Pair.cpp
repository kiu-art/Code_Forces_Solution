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
//         vector<pair<int,int>>v(n);
//         for(int x=0;x<n;x++){
//             int a;cin>>a;
//             v[x].first=a;
//             v[x].second=x;
//         }
//         sort(v.begin(),v.end());
//         int r=0;
//         for(int x=0;x<n-1;x++){
//             if(v[x].first>sqrt(n)){
//                 break;
//             }
//             int d=max(n-1-v[x].second,v[x].second);
//             for(int y=x+1;y<n;y++){
//                 if(v[x].first*v[y].first>d){
//                     break;
//                 }
//                 if(v[x].first*v[y].first==abs(v[y].second-v[x].second)){
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
        vector<int>a(n);
        for(int x=0;x<n;x++){
            cin>>a[x];
        }
        int r=0;
        int b=sqrt(n)+1;
        for(int x=1;x<=b;x++){
            for(int y=0;y<n;y++){
                int val=y-a[y]*x;
                if(val>=0 and val<n){
                    if(a[val]==x){
                        r++;
                    }
                }
            }
        }
        for(int x=1;x<=b;x++){
            for(int y=0;y<n;y++){
                int val=y+a[y]*x;
                if(val>=0 and val<n and a[y]>b){
                    if(a[val]==x){
                        r++;
                    }
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}