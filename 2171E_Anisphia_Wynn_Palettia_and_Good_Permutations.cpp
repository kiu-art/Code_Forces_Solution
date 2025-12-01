// #include <bits/stdc++.h> 
// using namespace std; 
// #define int long long

// void fast_io() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     std::cout.tie(NULL);
// }
// int ma=200010;
// vector<int> p(ma);
// vector<set<int>> num(ma);
// void sieve(){
//     for(int x=1;x<ma;x++){
//         p[x]=x;
//     }
//     for(int x=2;x<ma;x++){
//         if(p[x]==x){
//             for(int y=x*x;y<ma;y+=x){
//                 if(p[y]==y){
//                     p[y]=x;
//                 }
//             }
//         }
//     }
// }
// int factor(int n){
//     if(n<2){return 0;}
//     set<int> s;
//     int l=n;
//     while(n>=2){
//         s.insert(p[n]);
//         n/=p[n];
//     }
//     num[l].insert(s.begin(),s.end());
//     return 0;
// }
// signed main() {
//     fast_io(); 
//     sieve();
//     int t;cin>>t;
//     while(t--){
//         int n;cin>>n;
//         vector<int> v(n);
//         for(int x=0;x<n;x++){
//             cin>>v[x];
//         }
//         for(int x=0;x<n-2;x++){
//             if(num[v[x]].size()==0){factor(v[x]);}
//             if(num[v[x+1]].size()==0){factor(v[x+1]);}
//             if(num[v[x+2]].size()==0){factor(v[x+2]);}
//             set<int> s;
//             int r+=num[v[x]].size();
//             int r+=num[v[x+1]].size();
//             int r+=num[v[x+2]].size();
//             s.insert(num[v[x]].begin(),v[x].end());
//             s.insert(num[v[x+1]].begin(),v[x+1].end());
//             s.insert(num[v[x+2]].begin(),v[x+2].end());
//             if(s.size()!=r){result++;}
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
        for(int x=1;x<n+1;x++){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}