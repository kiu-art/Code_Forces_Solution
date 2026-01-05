#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
// set<string> v;
// int rec(string b){
//     if(b.length()==1){
//         v.insert(b);
//         return 0;
//     }
//     v.insert(b);
//     if(b[0]==b[1]){
//         b.erase(0,1);
//         // cout<<b;
//         rec(b);
//     }
//     else{
//         string c=b;
//         b.erase(0,1);
//         rec(b);
//         c.erase(1,1);
//         rec(c);
//     }
//     return 0;
// }


signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int r=0;
        int c=0;
        vector<int>v(n,0);
        vector<int>a(26,0);
        for(int x=0;x<n;x++){
            a[s[x]-97]++;
            if(a[s[x]-97]==1){
                c++;
            }
            r+=c;
        }
        cout<<r<<endl;
    }
    return 0;
}