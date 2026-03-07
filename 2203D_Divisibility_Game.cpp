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
//     for(int u=1;u<=t;u++){
//         int n,m;cin>>n>>m;
//         set<int>a;
//         map<int,pair<int,int>>v;
//         vector<int>arr(n+m+1,0);
//         vector<int>v1(m);
//         for(int x=0;x<n;x++){
//             int b;cin>>b;
//             a.insert(b);
//             arr[b]=1;
//         }
//         for(int x=0;x<m;x++){
//             int b;cin>>b;
//             v1[x]=b;
//             if(v[b].first!=1 and v[b].second!=1){
//                 if(arr[b]==1){
//                     v[b].first=1;
//                 }
//                 for(auto y:a){
//                     if(v[b].first!=1 and b%y==0){
//                         v[b].first=1;
//                     }
//                     if(v[b].second!=1 and b%y!=0){
//                         v[b].second=1;
//                     }
//                     if(v[b].first==1 and v[b].second==1){
//                         break;
//                     }
//                 }
//                 // cout<<endl;
//             }
//         }
//         // if(u==3541){
//         //     cout<<n<<'-'<<m<<'-';
//         //     for(auto x:a){
//         //         cout<<x<<"-";
//         //     }
//         //     cout<<'-';
//         //     for(auto x:v1){
//         //         cout<<x<<"-";
//         //     }
//         // }
//         int i=0,j=0,l=0;
//         // for(auto x:v){
//         //     cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
//         // }
//         // int k=a.size();
//         for(auto x:v1){
//             if(v[x].second==1 and v[x].first==1){
//                 l++;
//                 // cout<<v[x].first<<endl;
//             }
//             else if(v[x].first==1){
//                 i++;
//             }
//             else{
//                 j++;
//             }
//         }
//         // cout<<i<<" "<<j<<" "<<l<<" ";
//         if(l%2==0){
//             if(i>j){
//                 cout<<"Alice"<<endl;
//             }
//             else{
//                 cout<<"Bob"<<endl;
//             }
//         }
//         else{
//             if(j>i){
//                 cout<<"Bob"<<endl;
//             }
//             else{
//                 cout<<"Alice"<<endl;
//             }
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
        set<int>a;
        vector<int>v(n+m+1,0);
        for(int x=0;x<n;x++){
            int b;cin>>b;
            a.insert(b);
        }
        for(auto x:a){
            for(int y=x;y<n+m+1;y+=x){
                v[y]++;
            }
        }
        int i=0,j=0,l=0;
        int k=a.size();
        for(int x=0;x<m;x++){
            int b;cin>>b;
            if(v[b]==k){
                i++;
            }
            else if(v[b]==0){
                j++;
            }
            else{
                l++;
            }
        }
        if(l%2==0){
            if(i>j){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
        }
        else{
            if(j>i){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
    }
    return 0;
}