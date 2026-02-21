// // #include <bits/stdc++.h> 
// // using namespace std; 
// // #define int long long

// // void fast_io() {
// //     std::ios_base::sync_with_stdio(false);
// //     std::cin.tie(NULL);
// //     std::cout.tie(NULL);
// // }
// // int last(int c,int d){
// //     for(int x=n-1;x>=0;x--){
// //         if(v[x]==c){
// //             c++;
// //         }
// //         else if(v[x]==d){
// //             d--;
// //         }
// //         else{
// //             return x;
// //         }
// //     }
// //     return -1;
// // }

// // int first(int c, int d){
// //     for(int x=0;x<n;x++){
// //         if(v[x]==c){
// //             c++;
// //         }
// //         else if(v[x]==d){
// //             d--;
// //         }
// //         else{
// //             return x;
// //         }
// //     }
// //     return -1;
// // }

// // signed main() {
// //     fast_io(); 
// //     int t;cin>>t;
// //     while(t--){
// //         int n;cin>>n;
// //         vector<int>v(n);
// //         for(int x=0;x<n;x++){
// //             cin>>v[x];
// //         }
// //         int c=1;
// //         int d=n;
// //         if(v[x])
// //         int a=-1;
// //         int b;
// //         int e=0;
// //         if(!e){cout<<-1<<endl;}
// //         else{
// //             cout<<a+1<<" "<<b+1<<endl;
// //         }
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
//         int n;cin>>n;
//         vector<int>v(n);
//         for(auto &x:v){cin>>x;}
//         int a=0;
//         int b=0;
//         int c=1;
//         int d=n;
//         int f=0;
//         int e=0;
//         for(int x=0;x<n;x++){
//             if(e==0){
//                 if(v[x]==c){
//                     c++;
//                 }
//                 else if(v[x]==d){
//                     d--;
//                 }
//                 else{
//                     a=x;
//                     e=1;
//                 }
//             }
//             if(f==0){
//                 if(v[n-x-1]==c){
//                     c++;
//                     if(v[x]==c){
//                         e=0;
//                         c++;
//                     }
//                 }
//                 else if(v[n-x-1]==d){
//                     d--;
//                     if(v[x]==d){
//                         e=0;
//                         d--;
//                     }
//                 }
//                 else{
//                     f=1;
//                     b=n-1-x;
//                 }
//             }
//         }
//         if(a<b and e==1 and f==1){
//             cout<<a+1<<" "<<b+1<<endl;
//         }
//         else{
//             cout<<-1<<endl;
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
        int n;cin>>n;
        vector<int>v(n);
        for(auto &x:v){cin>>x;}
        int i=0;
        int j=n-1;
        int a=1;
        int b=n;
        while(i<j){
            if(v[i]==a or v[i]==b){
                if(v[i]==a){a++;}
                else{b--;}
                i++;
                continue;
            }
            if(v[j]==a or v[j]==b){
                if(v[j]==a){a++;}
                else{b--;}
                j--;
                continue;
            }
            break;
        }
        if(i>=j){cout<<-1<<endl;}
        else{cout<<i+1<<" "<<j+1<<endl;}
    }
    return 0;
}