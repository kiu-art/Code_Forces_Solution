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
//         map<int,int>v1;
//         map<int,pair<int,int>>v2;
//         map<int,int>v3;
//         int a;
//         for(int x=0;x<n;x++){
//             cin>>a;
//             v1[a]++;
//         }
//         for(int x=0;x<n;x++){
//             cin>>a;
//             v2[a].first++;
//         }
//         for(int x=0;x<n;x++){
//             cin>>a;
//             v3[a]++;
//         }
//         for(auto &x:v2){
//             for(auto y:v3){
//                 if(x.first<y.first){
//                     x.second.second=x.second.first*y.second;
//                 }
//             }
//         }
//         int r=0;
//         for(auto x:v1){
//             for(auto y:v2){
//                 if(x.first<y.first){
//                     r+=y.second.second*x.second;
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
        vector<int>v1(n);
        vector<int>v2(n);
        vector<int>v3(n);
        for(int x=0;x<n;x++){
            cin>>v1[x];
        }
        for(int x=0;x<n;x++){
            cin>>v2[x];
        }
        for(int x=0;x<n;x++){
            cin>>v3[x];
        }
        int e=0;
        int a=0;
        for(int x=0;x<n;x++){
            e=0;
            for(int y=0;y<n;y++){
                    if(v1[y]>=v2[(y+x)%n]){
                        e=1;
                        break;
                    }
            }
            if(e==0){
                a++;
            }
        }
        int b=0;
        e=0;
        for(int x=0;x<n;x++){
            e=0;
            for(int y=0;y<n;y++){
                    if(v2[y]>=v3[(y+x)%n]){
                        e=1;
                        break;
                    }
            }
            if(e==0){
                b++;
            }
        }
        cout<<a*b*n<<endl;
    }
    return 0;
}