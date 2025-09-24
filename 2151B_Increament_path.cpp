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
//         int n,m;cin>>n>>m;
//         string s;cin>>s;
//         set<int> v;
//         int a;
//         for(int x=0;x<m;x++){
//             cin>>a;
//             v.insert(a);
//         }
//         a=1;
//         int b=1;
//         int e=0;
//         int f=0;
//         char x;
//         for(int y=0;y<n and y<n;y++){
//             e=0;
//             f=0;
//             x=s[y];
//             if(x=='A'){
//                 a++;
//                 v.insert(a);
//             }
//             else{
//                 while(e==0){
//                     a++;
//                     if(count(v.begin(),v.end(),a)==0){
//                         if(f==0){
//                             v.insert(a);
//                             f++;
//                         }
//                         else{
//                             e=1;
//                             f++;
//                         }
//                     }
//                 }
//             }
//         }
//         cout<<v.size()<<"\n";
//         for(auto x:v){
//             cout<<x<<" ";
//         }
//         cout<<"\n";
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
        int n,m;cin>>n>>m;
        string s;cin>>s;
        vector<int> v(100000,0);
        int a;
        for(int x=0;x<n;x++){
            cin>>a;
            v[a-1]++;
        }
        for(int x=0;x<100000;x++){
            for
        }
    }
    return 0;
}