// // // #include <bits/stdc++.h> 
// // // using namespace std; 
// // // #define int long long

// // // void fast_io() {
// // //     std::ios_base::sync_with_stdio(false);
// // //     std::cin.tie(NULL);
// // //     std::cout.tie(NULL);
// // // }

// // // signed main() {
// // //     fast_io(); 
// // //     int t;cin>>t;
// // //     while(t--){
// // //         int n,q;cin>>n>>q;
// // //         vector<pair<int,int>>v(n);
// // //         for(int x=0;x<n;x++){
// // //             int a;cin>>a;
// // //             v[x].first=a;
// // //             v[x].second=x;
// // //         }
// // //         sort(v.begin(),v.end());
// // //         for(int x=0;x<q;x++){
// // //             int idx,a,b;cin>>idx>>a>>b;
// // //             for(int y=0;y<n;y++){
// // //                 if(a%v[y].first==0 and v[y].second>=idx-1){
// // //                     v[y].first*=b;
// // //                 }
// // //                 if(v[y].first>a){
// // //                     break;
// // //                 }
// // //             }
// // //             sort(v.begin(),v.end());
// // //         }
// // //         sort(v.begin(),v.end(),[](
// // //             auto& a,
// // //             auto& b
// // //         ){
// // //             return a.second<b.second;
// // //         });
// // //         for(auto x:v){
// // //             cout<<x.first<<" ";
// // //         }
// // //         cout<<endl;
// // //     }
// // //     return 0;
// // // }


// // #include <bits/stdc++.h> 
// // using namespace std; 
// // #define int long long

// // void fast_io() {
// //     std::ios_base::sync_with_stdio(false);
// //     std::cin.tie(NULL);
// //     std::cout.tie(NULL);
// // }

// // signed main() {
// //     fast_io(); 
// //     int t;cin>>t;
// //     vector<set<int>>vv(501);
// //     for(int x=1;x<=500;x++){
// //         for(int y=1;y<=x;y++){
// //             if(x%y==0){
// //                 vv[x].insert(y);
// //             }
// //         }
// //     }
// //     while(t--){
// //         int n,q;cin>>n>>q;
// //         map<int,set<int>>m;
// //         for(int x=0;x<n;x++){
// //             int a;cin>>a;
// //             m[a].insert(x);
// //         }
// //         for(int x=0;x<q;x++){
// //             int idx,a,b;cin>>idx>>a>>b;
// //             auto s1=vv[a];
// //             for(auto y:vv){
// //                 auto s2=m[y];
// //                 for(auto z:s2){
// //                     set<int>ss;
// //                     for(auto z:y.second){
// //                         if(z>=idx-1){
// //                             ss.insert(z);
// //                         }
// //                     }
// //                     for(auto z:ss){
// //                         m[y.first].erase(z);
// //                         m[y.first*b].insert(z);
// //                     }
// //                 }
// //             }
// //         }
// //         vector<int>v(n);
// //         for(auto x:m){
// //             for(auto y:x.second){
// //                 v[y]=x.first;
// //             }
// //         }
// //         for(auto x:v){
// //             cout<<x<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

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
//         // map<int,set<int>>s;
//         int n,q;cin>>n>>q;
//         map<int,set<int>>m;
//         for(int x=0;x<n;x++){
//             int a;cin>>a;
//             m[a].insert(x+1);
//         }
//         for(int u=0;u<q;u++){
//             int idx,x,y;cin>>idx>>x>>y;
//             map<int,set<int>>s1;
//             map<int,set<int>>s2;
//             for(auto a:m){
//                 if(x%a.first==0){
//                     // s[x].insert(a.first);
//                     for(auto b:a.second){
//                         if(b>=idx){
//                             s1[a.first].insert(b);
//                             // cout<<y*a.first;
//                             s2[a.first*y].insert(b);
//                         }
//                     }
//                 }
//                 else if(a.first>x){
//                     break;
//                 }
//             }
//             for(auto b:s1){
//                 for(auto c:b.second){
//                     m[b.first].erase(c);
//                 }
//                 // cout<<b<<" ";
//             }
//             for(auto b:s2){
//                 for(auto c:b.second){
//                     m[b.first].insert(c);
//                 }
//                 // cout<<b<<" ";
//             }
//         }
//         vector<int>v(n);
//         for(auto x:m){
//             for(auto y:x.second){
//                 v[y-1]=x.first;
//                 // cout<<x.first<<" "<<y-1<<endl;
//             }
//         }
//         for(auto x:v){
//             cout<<x<<" ";
//         }
        
//     }
//     return 0;
// }

#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        map<int,set<int>>m;
        for(int x=0;x<n;x++){
            int a;cin>>a;
            m[a].insert(x+1);
        }
        for(int u=0;u<q;u++){
            int idx,x,y;cin>>idx>>x>>y;
            map<int,set<int>>s1;
            map<int,set<int>>s2;
            vector<int>d;
            for(int i=1;i*i<=x;i++){
                if(x%i==0){
                    d.push_back(i);
                    if(i*i!=x) d.push_back(x/i);
                }
            }
            for(auto a:d){
                if(m.count(a)==0) continue;
                for(auto b:m[a]){
                    if(b>=idx){
                        s1[a].insert(b);
                        s2[a*y].insert(b);
                    }
                }
            }
            for(auto b:s1){
                for(auto c:b.second){
                    m[b.first].erase(c);
                }
            }
            for(auto b:s2){
                for(auto c:b.second){
                    m[b.first].insert(c);
                }
            }
        }
        vector<int>v(n);
        for(auto x:m){
            for(auto y:x.second){
                v[y-1]=x.first;
            }
        }

        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}