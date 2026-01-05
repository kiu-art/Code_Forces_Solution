#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
        int n,pa,pb;cin>>n>>pa>>pb;
        int a=0;
        int b=0;
        string s;cin>>s;
        vector<int>p(n);
        int sum=0;
        for(auto &x:p){
            cin>>x;
            sum+=x;
        }
        if(count(s.begin(),s.end(),'1')==n){
            if(pb<pa+n){
                cout<<"NO"<<endl;
                continue;
            }
        }
        if(count(s.begin(),s.end(),'0')==n){
            if(pb+n>pa){
                cout<<"NO"<<endl;
                continue;
            }
        }
        int c=0;
        for(int x=0;x<n;x++){
            if(s[x]=='0'){
                c=max(1LL,(p[x]/2)+1);
                a+=c;
            }
            else{
                c=max(1LL,(p[x]/2)+1);
                b+=c;
            }
        }
        if(pa+pb<sum){cout<<"NO"<<endl;}
        else if(a<=pa and b<=pb){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


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
//         int n,pa,pb;cin>>n>>pa>>pb;
//         string s;cin>>s;
//         vector<int>p(n);
//         for(auto &x:p){
//             cin>>x;
//         }
//         int c=pb-pa;
//         for(auto x:s){
//             if(x=='0'){

//             }
//         }
//     }
//     return 0;
// }