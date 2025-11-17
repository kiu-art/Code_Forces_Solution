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
//         vector<int> s;
//         s=v;
//         sort(s.begin(),s.end());
//         int r=0;
//         int a=0;
//         int e=0;
//         int f=0;
//         int i;
//         int j;
//         for(int x=0;x<v.size();x++){
//             if(x==1 and f==1){
//                 x=0;
//                 f=0;
//             }
//             if(v[x]==s[e]){
//                 i=x-1;
//                 j=x+1;
//                 if(x-1<0){i=n-1;}
//                 else if(x+1>n-1){j=0;}
//                 if(v.size()==2){
//                     a=max(v[0],v[1]);
//                     r+=a;
//                     break;
//                 }
//                 a=max(v[x],min(v[i],v[j]));
//                 if(a==v[x]){
//                     r+=a;
//                     int g=min(v[i],v[j]);
//                     if(v[i]==g){
//                         v.erase(v.begin()+i);
//                     }
//                     else{
//                         v.erase(v.begin()+j);
//                     }
//                     // for(auto x:v){cout<<x<<" ";}
//                     // cout<<-1<<" "<<r<<endl;
//                 }
//                 else if(a==v[i]){
//                     r+=a;
//                     v.erase(v.begin()+x);
//                     // for(auto x:v){cout<<x<<" ";}
//                     // cout<<-2<<" "<<r<<endl;
//                 }
//                 else{
//                     r+=a;
//                     v.erase(v.begin()+x);
//                     // for(auto x:v){cout<<x<<" ";}
//                     // cout<<-3<<" "<<r<<endl;
//                 }
//                 e++;
//                 n--;
//                 x=0;
//                 f=1;
//             }
//         }
//         // for(auto x:v){cout<<x<<" ";}
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
        vector<int>v(n);
        int a=0;
        int i=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(v[x]>a){
                i=x;
                a=v[x];
            }
        }
        rotate(v.begin(),v.begin()+i,v.end());
        int r=0;
        int b=v[0];
        for(int x=1;x<n;x++){
            r+=max(b,v[x]);
            b=v[x];
        }
        cout<<r<<endl;
    }
    return 0;
}