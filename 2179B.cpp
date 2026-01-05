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
//         int sum=0;
//         int a=0;
//         int b=0;
//         vector<int> v(n);
//         for(int x=0;x<n;x++){
//             cin>>v[x];
//         }
//         for(int x=0;x<n;x++){
//             if(x==0){
//                 a=v[x+1]-v[x];
//                 b=x;
//             }
//             else if(x==n-1 and abs(v[x]-v[x-1])>=a){
//                 b=x;
//             }
//             else if(abs(abs(v[x+1]-v[x])+abs(v[x]-v[x-1])-abs(v[x-1]-v[x+1]))>=a){
//                 a=abs(abs(v[x+1]-v[x])+abs(v[x]-v[x-1])-abs(v[x-1]-v[x+1]));
//                 b=x;
//             }
//         }
//         int e=-1;
//         v.erase(v.begin()+b);
//         for(auto x:v){
//             if(e==-1){
//                 e=x;
//                 continue;
//             }
//             sum+=abs(x-e);
//             e=x;
//             // cout<<v[x]<<v[x-1]<<abs(v[x]-v[x-1])<<endl;
//         }
//         cout<<sum<<endl;
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
        vector<int>v(n);
        int sum=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
        }
        for(int x=0;x<n;x++){
            if(x>0){
                sum+=abs(v[x]-v[x-1]);
            }
        }
        // cout<<sum<<endl;
        int a=sum*2;
        for(int x=0;x<n;x++){
            int b=sum;
            if(x==0){
                b-=abs(v[1]-v[0]);
                if(b<a){
                    a=b;
                    // cout<<a;
                }
            }
            else if(x==n-1){
                b-=abs(v[n-1]-v[n-2]);
                if(b<a){
                    // cout<<x;
                    a=b;
                }
            }
            else{
                b-=abs(v[x+1]-v[x])+abs(v[x]-v[x-1]);
                b+=abs(v[x-1]-v[x+1]);
                if(b<a){
                    // cout<<x;
                    a=b;
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}