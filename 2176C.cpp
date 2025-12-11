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
//         vector<int>e;
//         vector<int>o;
//         int b=0;
//         for(int x=0;x<n;x++){
//             int a;cin>>a;
//             if(a%2==0){
//                 e.push_back(a);
//                 b+=a;
//             }
//             else{
//                 o.push_back(a);
//             }
//         }
//         int a=o[0];
//         int r=0;
//         if(o.size()==0){
//             for(int x=0;x<n;x++){
//                 cout<<0<<" ";
//             }
//             cout<<endl;
//             continue;
//         }
//         sort(o.rbegin(),o.rend());
//         if(e.size()==0){
//             for(int x=0;x<n;x++){
//                 if(x%2==0){
//                     cout<<a<<" ";
//                 }
//                 else{
//                     cout<<"0 ";
//                 }
//             }
//             cout<<endl;
//             continue;
//         }
//         sort(e.rbegin(),e.rend());
//         // cout<<e.size()<<endl;
//         int q=-1;
//         int f=0;
//         for(int x=0;x<n;x++){
//             if(x==0){
//                 cout<<a<<" ";
//                 // cout<<"a"<<endl;
//             }
//             else if(q==e.size()-1 or f==1){
//                 // cout<<"b"<<endl;
//                 r-=e[q];
//                 q--;
//                 f=1;
//                 cout<<a+r<<" ";
//             }
//             else {
//                 q++;
//                 r+=e[q];
//                 // cout<<"c"<<x<<endl;
//                 cout<<a+r<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;cin>>t;
//     while(t--){
//         int n;cin >> n;
//         vector<int> o, e;
//         for (int i = 0; i < n; i++) {
//             int x;cin >> x;
//             if(x%2!=0) o.push_back(x);
//             else e.push_back(x);
//         }
//         sort(o.rbegin(),o.rend());
//         sort(e.rbegin(),e.rend());
//         int os=o.size();
//         int es=e.size();
//         vector<int> p(es + 1, 0);
//         for(int i=0;i<es;i++){
//             p[i+1]=p[i]+e[i];
//         }
//         for(int k=1;k<=n;k++){
//             int c=max(1,(k-es));
//             if(c%2==0){c++;}
//             if(c>os or c>k){
//             cout<<"0 ";
//             } 
//             else{
//             cout<<o[0]+ p[k-c]<< " ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int main(){
    fast_io();
    int t;cin>>t;
    while (t--) {
        int n;cin>>n;
        vector<long long>a,b;
        for (int i=0;i<n;i++) {
            long long x;cin>>x;
            if (x%2!=0){a.push_back(x);}
            else {b.push_back(x);}
        }
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        int o=a.size();
        int e=b.size();
        vector<long long>p(e+1,0);
        for(int i=0;i<e;i++){
            p[i+1]=p[i]+b[i];
        }
        for(int k=1;k<=n;k++){
            int c=max(1,k-e);
            if(c%2==0){c++;}
            if(c>o or c>k){
                cout<<"0 ";
            } 
            else{
                cout<<a[0]+p[k-c]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}