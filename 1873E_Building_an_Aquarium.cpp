// #include <bits/stdc++.h> 
// using namespace std; 
// // #define int long long

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
//         vector<int>v(n);
//         for(auto &x:v){
//             cin>>x;
//         }
//         sort(v.begin(),v.end());
//         int h=v[0];
//         int a=v[0];
//         int b=0;
//         for(int y=1;y<=m;y++){
//             a++;
//             int e=0;
//             for(int x=0;x<n;x++){
//                 b+=max(a-v[x],0);
//                 if(b>m){
//                     e=1;
//                     break;
//                 }
//             }
//             if(e==1){
//                 break;
//             }
//             else{
//                 if(a>h){
//                     a=h;
//                 }
//             }
//         }
//         cout<<a<<endl;
//     }
//     return 0;
// }


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
//         vector<int>v(n);
//         for(int x=0;x<n;x++){
//             cin>>v[x];
//         }
//         sort(v.begin(),v.end());
//         int a=v[n-1];
//         int b=0;
//         for(int x=0;x<n;x++){
//             b+=a-v[x];
//         }
//         int h=a;
//         if(b<m){
//             h+=(m-b)/n;
//         }
//         else if(b>m){
//             int e=n-1;
//             while(b>m){
//                 if(v[e]!=a){
//                     if(a-v[e]==1){
//                         b-=e+1;
//                         a--;
//                     }
//                     else{
//                         b-=e+1;
//                     }
//                     h--;
//                 }
//                 else{
//                     e--;
//                 }
//             }
//         }
//         cout<<h<<endl;
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
        vector<int>v(n);
        for(int x=0;x<n;x++){
            cin>>v[x];
        }
        sort(v.begin(),v.end());
        int a=v[n-1];
        int b=0;
        for(int x=0;x<n;x++){
            b+=a-v[x];
        }
        int h=a;
        if(b<m){
            h+=(m-b)/n;
        }
        else if(b>m){
            int e=v[0];
            b=0;
            h=e;
            for(int x=0;x<n;x++){
                if(v[x]>e){
                    int f=v[x]-e;
                    int g=f*(x);
                    if(g+b>=m){
                        h+=(m-b)/(x);
                        // cout<<b<<" "<<h<<"asda";
                        break;
                    }
                    else{
                        h+=f;
                        b+=f*(x);
                        // cout<<b<<" "<<h<<" "<<x<<"asda";
                    }
                    e=v[x];
                }

            }
        }
        cout<<h<<endl;
    }
    return 0;
}