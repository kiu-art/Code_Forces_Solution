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
//         vector<int>a(n);
//         vector<int>b(n);
//         vector<int>c(n);
//         int i,j,k;
//         vector<int>v;
//         for(auto &x:a){cin>>x;}
//         for(auto &x:b){cin>>x;}
//         for(int x=0;x<n;x++){
//             cin>>c[x];
//             int l=max(a[x],max(c[x],b[x]));
//             v.push_back(l);
//         }
//         sort(v.rbegin(),v.rend());
//         int r=(v[0]+v[1]+v[2]);
//         for(int x=0;x<3;x++){
//             cout<<v[x]<<" ";
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
        vector<pair<int,int>>a(n);
        vector<pair<int,int>>b(n);
        vector<pair<int,int>>c(n);
        for(int x=0;x<n;x++){
            cin>>a[x].first;
            a[x].second=x+1;
        }
        for(int x=0;x<n;x++){
            cin>>b[x].first;
            b[x].second=x+1;
        }
        for(int x=0;x<n;x++){
            cin>>c[x].first;
            c[x].second=x+1;
        }
        sort(a.rbegin(),a.rend());
        sort(c.rbegin(),c.rend());
        sort(b.rbegin(),b.rend());
        int r=0;
        for(int x=0;x<3;x++){
            for(int y=0;y<3;y++){
                for(int z=0;z<3;z++){
                    int q=a[x].first+b[y].first+c[z].first;
                    if(a[x].second==b[y].second or a[x].second==c[z].second or b[y].second==c[z].second){
                        continue;
                    }
                    r=max(r,q);
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}