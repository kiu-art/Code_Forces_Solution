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
//         int c=0;
//         vector<int>e(n);
//         for(int x=0;x<n;x++){
//             cin>>v[x];
//         }
//         int r=0;
//         int b;
//         for(int x=0;x<n;x++){
//             if(x==0){
//                 b=v[x];
//             }
//             else if(b<0 and v[x]>0){
//                 int w=0;
//                 int u=v[x];
//                 int o=0;
//                 for(int y=x+1;y<n;y++){
//                     if(u<=(-v[y])){
//                         w+=-v[y];
//                         // cout<<-v[x]<<" ";
//                     }
//                     else{
//                         w+=u;
//                         u=v[y];
//                         // cout<<b<<" ";
//                     }
//                     if(w+b>=0){
//                         o=1;
//                         break;
//                     }
//                 }
//                 if(o){
//                     r+=b;
//                     b=v[x];
//                 }
//                 else{
//                     r-=v[x];
//                 }
//                 // cout<<"dasda";
//             }
//             else{
//                 if(b<=(-v[x])){
//                     r+=-v[x];
//                     // cout<<-v[x]<<" ";
//                 }
//                 else{
//                     r+=b;
//                     b=v[x];
//                     // cout<<b<<" ";
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
        vector<int>v(n);
        int b=0;
        for(auto &x:v){
            cin>>x;
            b+=x;
        }
        b-=v[0];
        int c=b;
        b=-b;
        int r=0;
        for(int x=1;x<n;x++){
            c-=v[x];
            int e=v[0]+r-c;
            if(e>b){
                // cout<<v[0]+r<<" "<<c;
                b=e;
            }

            r+=abs(v[x]);
        }
        cout<<b<<endl;
    }
    return 0;
}