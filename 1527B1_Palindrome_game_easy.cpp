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
//         string s;cin>>s;
//         vector<int>v(n);
//         int a=0;
//         int b=0;
//         int i=0;
//         int e=1;
//         if(n<3){
//             cout<<"BOB"<<endl;
//             continue;
//         }
//         if(n%2==1){
//             i=n/2;
//         }
//         for(int x=0;x<n;x++){
//             if(s[x]=='1'){
//                 v[x]=1;
//             }
//             else{
//                 v[x]=0;
//                 a++;
//             }
//         }
//         if(s[i]=='0' and i!=0){
//             e=-1;
//             a--;
//         }
//         if(e==1){
//             if(a%4==0){
//                 cout<<"DRAW";
//             }
//             else{
//                 cout<<"BOB";
//             }
//         }
//         else{
//             if(a%2==1){
//                 cout<<"DRAW";
//             }
//             else{
//                 int c=a%4;
//                 if(c==0){
//                     cout<<"BOB";
//                 }
//                 else{
//                     cout<<"ALICE";
//                 }
//             }
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
        int n;cin>>n;
        string s;cin>>s;
        int a=0;
        for(int x=0;x<n;x++){
            if(s[x]=='0'){
                a++;
            }
        }
        if(a%2==1 and a!=1){
            cout<<"ALICE";
        }
        else{
            cout<<"BOB";
        }
        cout<<endl;
    }
    return 0;
}