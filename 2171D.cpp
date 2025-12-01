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
//         vector<int> v(n);
//         vector<int> l(n);
//         set<int>s;
//         for(int x=0;x<n;x++){
//             cin>>v[x];
//             l[v[x]-1]=x;
//         }
//         if(v[0]==n){cout<<"No\n";continue;}
//         if(v[n-1]==n or v[0]==1){cout<<"Yes\n";continue;}
//         int e=0;
//         s.insert()
//         for(int x=n-1;x>=0;x--){
//             int a=l[x];
//             for(int y=0;y<a;y++){
//                 if(v[y]<x+1){
//                     s.insert(v[y]);
//                     // cout<<"Dasd"<<endl;
//                 }
//                 if(s.size()==n){
//                     e=1;
//                     break;
//                 }
//             }
//             if(e==1){
//                 break;
//             }
//         }
//         // for(auto x:s){cout<<x<<" ";}
//         if(e==1){
//             cout<<"Yes\n";
//         }
//         else{cout<<"No\n";}
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
        vector<int> v(n);
        vector<int> v1(n);
        for(int x=0;x<n;x++){
            cin>>v[x];
            v1[v[x]-1]=x;
        }
        if(v[n-1]==n or v[0]==1){cout<<"YES"<<endl;continue;}
        if(v[0]==n or v[n-1]==1){cout<<"NO"<<endl;continue;}
        int e=0;
        int i=0;
        int k=v1[n-1];
        for(int x=n-2;x>=0;x--){
            int a=v1[x];
            i=max(i,a);
            if(a<k){
                k=max(i,k);
                e=0;
            }
        }
        // cout<<k;
        if(k==n-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}