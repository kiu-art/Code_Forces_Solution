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
//         int i=0;
//         int j=0;
//         int i1=0;
//         int j1=0;
//         for(auto &x:a){cin>>x;}
//         for(auto &x:b){cin>>x;}
//         for(int x=0;x<n;x++){
//             if(a[x]==b[x]){
//                 continue;
//             }
//             if(a[x]!=b[x]){
//                 if(x%2==0){
//                     i++;
//                     i1++;
//                     j1=0;
//                 }
//                 else{
//                     j++;
//                     j1++;
//                     i1=0;
//                 }
//             }
//         }
//         if(i1>1){cout<<"Ajisai"<<endl;continue;}
//         else if(j1>1){cout<<"Mai"<<endl;continue;}
//         if(i>j){cout<<"Ajisai"<<endl;}
//         else if(j>i){cout<<"Mai"<<endl;}
//         else{cout<<"Tie"<<endl;}
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
        vector<int>a(n);
        vector<int>b(n);
        int i=0;
        int j=0;
        int k=0;
        int l=0;
        for(int x=0;x<n;x++){
            cin>>a[x];
            i^=a[x];
        }
        for(int x=0;x<n;x++){
            cin>>b[x];
            j^=b[x];
        }
        int e=0;
        for(int x=0;x<n;x++){
            if(a[x]!=b[x]){
                if(x%2==0){
                    k++;
                    e=1;
                }
                else{
                    l++;;
                    e=2;
                }
            }
        }
        if(i==j){
            cout<<"Tie"<<endl;
        }
        else if(e==1){cout<<"Ajisai"<<endl;}
        else if(e==2){cout<<"Mai"<<endl;}
    }
    return 0;
}