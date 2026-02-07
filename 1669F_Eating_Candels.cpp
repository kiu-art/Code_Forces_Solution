// // // // #include <bits/stdc++.h> 
// // // // using namespace std; 
// // // // #define int long long

// // // // void fast_io() {
// // // //     std::ios_base::sync_with_stdio(false);
// // // //     std::cin.tie(NULL);
// // // //     std::cout.tie(NULL);
// // // // }

// // // // signed main() {
// // // //     fast_io(); 
// // // //     int t;cin>>t;
// // // //     while(t--){
// // // //         int n;cin>>n;
// // // //         vector<int>v(n);
// // // //         int d=0;
// // // //         for(auto &x:v){
// // // //             cin>>x;
// // // //             d+=x;
// // // //         }
// // // //         vector<int>a(n);
// // // //         a[0]=v[0];
// // // //         vector<int>b;
// // // //         b.push_back(a[0]);
// // // //         b.push_back(v[n-1]);
// // // //         int c=v[n-1];
// // // //         for(int x=1;x<n;x++){
// // // //             a[x]=a[x-1]+v[x];
// // // //             b.push_back(a[x]);
// // // //             b.push_back(v[n-1-x]+c);
// // // //             c+=v[n-1-x];
// // // //         }
// // // //         sort(b.begin(),b.end());
// // // //         int e=0;
// // // //         int f=0;
// // // //         int g=0;
// // // //         for(int x=0;x<2*n;x++){
// // // //             if(b[x]==b[x+1]){
// // // //                 e=b[x];
// // // //             }
// // // //         }
// // // //         for(auto x:b){
// // // //             cout<<x<<" ";
// // // //         }
// // // //         cout<<endl;
// // // //         cout<<g+1+n-f<<" "<<g<<" "<<f<<endl;
// // // //     }
// // // //     return 0;
// // // // }



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
//         vector<int> v(n);
//         for(int x=0;x<n;x++){
//             cin>>v[x];
//         }
//         vector<int>a(n);
//         vector<int>b(n);
//         vector<int>arr;
//         a[0]=v[0];
//         b[0]=v[n-1];
//         arr.push_back(a[0]);
//         arr.push_back(b[0]);
//         for(int x=1;x<n;x++){
//             a[x]=a[x-1]+v[x];
//             b[x]=b[x-1]+v[n-1-x];
//             arr.push_back(a[x]);
//             arr.push_back(b[x]);
//         }
//         sort(arr.begin(),arr.end());
//         vector<int>v1;
//         for(int x=0;x<n*2;x++){
//             if(arr[x]==arr[x+1]){
//                 v1.push_back(arr[x]);
//             }
//         }
//         int r=0;
//         for(auto x:v1){
//             int i=0;
//             int j=0;
//             for(int y=0;y<n;y++){
//                 if(a[y]==x){
//                     i=y;
//                 }
//                 else if(i and b[n-1-y]==x){
//                     j=y;
//                     break;
//                 }
//             }
//             r=max(i+j,r);
//         }
//         cout<<r+2<<endl;
//     }
//     return 0;
// }


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
// //     while(t--){
// //         int n;cin>>n;
// //         vector<int>v(n);
// //         int a=0;
// //         for(int x=0;x<n;x++){
// //             cin>>v[x];
// //             a+=v[x];
// //         }
// //         vector<pair<int,int>>arr(n);
// //         arr[0].first=v[0];
// //         arr[0].second=a;
// //         for(int x=1;x<n;x++){
// //             arr[x].first=arr[x-1].first+v[x];
// //             arr[x].second=arr[x-1].second-v[x-1];
// //         }
// //         int r=0;
// //         // for(int x=0;x<n-1;x++){
// //         //     for(int y=x+1;y<n;y++){
// //         //         if(arr[x].first==arr[y].second){
// //         //             r=max(x+n-1-y+2,r);
// //         //             // cout<<x<<" "<<y<<"    ";
// //         //             break;
// //         //         }
// //         //     }
// //         // }
// //         cout<<r<<endl;
// //     }
// //     return 0;
// // }



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
        int r=0;
        for(auto &x:v){cin>>x;r+=x;}
        vector<pair<int,int>>arr;
        // v1.push_back({v[0],0});
        // v1.push_back({r,0});
        int a=0;
        int b=0;
        for(int x=0;x<n;x++){
            arr.push_back({a+v[x],(x+1)*-1});
            arr.push_back({b+v[n-1-x],(n-x)*1});
            a+=v[x];
            b+=v[n-1-x];
        }
        int o=0;
        sort(arr.begin(),arr.end());
        for(int x=1;x<arr.size();x++){
            if(arr[x].first==arr[x-1].first and max(arr[x].second,arr[x-1].second)>abs(min(arr[x].second,arr[x-1].second))){
                o=max(n-max(arr[x].second,arr[x-1].second)+(abs(min(arr[x].second,arr[x-1].second)))+1,o);
                // cout<<x<<" "<<arr[x].first<<" "<<arr[x-1].first;
            }
        }
        // for(auto x:arr){
        //     cout<<x.first<<" "<<x.second<<" ,";
        // }
        cout<<o<<endl;
    }
    return 0;
}