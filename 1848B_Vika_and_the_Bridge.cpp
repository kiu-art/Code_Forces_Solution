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
//         int n,k;cin>>n>>k;
//         map<int,array<int,4>>v;
//         for(int x=0;x<n;x++){
//             int a;cin>>a;
//             v[a][0]++;
//             if(v[a][1]<x-v[a][3]-1){
//                 v[a][2]=v[a][1];
//                 v[a][1]=x-v[a][3]-1;
//             }
//             else if(v[a][2]<x-v[a][3]-1){
//                 v[a][2]=x-v[a][3]-1;
//             }
//             v[a][3]=x;
//         }
//         int r=0;
//         for(auto x:v){
//             cout<<x.first<<" "<<x.second[0]<<" "<<x.second[1]<<" "<<x.second[2]<<" "<<x.second[3]<<"     ";
//         }
//         cout<<endl;
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
        int n,k;cin>>n>>k;
        vector<vector<int>>v(k);
        int a=0;
        for(int x=0;x<n;x++){
            cin>>a;
            v[a-1].push_back(x+1);
        }
        int r=n+1;
        for(int x=0;x<k;x++){
            if(v[x].size()==0){continue;}
            int b=v[x][0]-1;
            int c=0;
            int d=v[x].size();
            for(int y=1;y<d;y++){
                if(v[x][y]-v[x][y-1]-1>=b){
                    c=b;
                    b=v[x][y]-v[x][y-1]-1;
                }
                else if(v[x][y]-v[x][y-1]-1>c){
                    c=v[x][y]-v[x][y-1]-1;
                }
            }
            if(n-v[x][d-1]>=b){
                c=b;
                b=n-v[x][d-1];
            }
            else if(n-v[x][d-1]>c){
                c=n-v[x][d-1];
            }
            r=min(r,max((b/2),c));
        }
        cout<<r<<endl;
    }
    return 0;
}