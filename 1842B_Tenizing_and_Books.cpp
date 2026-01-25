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
//         deque<int>r;
//         int p=0;
//         while(m){
//             r.push_front(m%2);
//             if(r[0]==1){
//                 p++;
//             }
//             m/=2;
//         }
//         // r.push_back(1);
//         // for(auto x:r){
//         //     cout<<x<<" ";
//         // }
//         // cout<<endl;
//         set<int>s;
//         int e=0;
//         for(int x=1;x<=3*n;x++){
//             int a;cin>>a;
//             if(e==1){
//                 continue;
//             }
//             set<int>h;
//             for(int y=0;y<33 and a!=0;y++){
//                 // if(a==0){
//                 //     if(y>=r.size()){
//                 //         e=1;
//                 //         break;
//                 //     }
//                 //     else if(r[y]==1){
//                 //         h.insert(y);
//                 //     }
//                 //     else{
//                 //         e=1;
//                 //         break;
//                 //     }
//                 // }
//                 if(a%2==1){
//                     if(r[y]==1){
//                         h.insert(y);
//                     }
//                     else{
//                         e=1;
//                         break;
//                     }
//                 }
//                 a/=2;
//             }
//             if(!e){
//                 s.insert(h.begin(),h.end());
//             }
//             if(x%n==0){
//                 e=0;
//             }
//         }
//         if(s.size()==p){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
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
        int n,m;cin>>n>>m;
        int d,e;
        d=e=0;
        for(int x=0;x<n;x++){
            int y;cin>>y;
            if(e==1){continue;}
            else if((m|y)!=m){
                e=1;
            }
            else{
                d|=y;
            }
        }
        e=0;
        for(int x=0;x<n;x++){
            int y;cin>>y;
            if(e==1){continue;}
            else if((m|y)!=m){
                e=1;
            }
            else{
                d|=y;
            }
        }
        e=0;
        for(int x=0;x<n;x++){
            int y;cin>>y;
            if(e==1){continue;}
            else if((m|y)!=m){
                e=1;
            }
            else{
                d|=y;
            }
        }
        if(d==m){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}