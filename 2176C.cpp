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
        vector<int>e;
        vector<int>o;
        for(int x=0;x<n;x++){
            int a;cin>>a;
            if(a%2==0){
                e.push_back(a);
            }
            else{
                o.push_back(a);
            }
        }
        sort(o.rbegin(),o.rend());
        sort(e.rbegin(),e.rend());
        if(o.size()==0){
            for(int x=0;x<n;x++){
                cout<<"0 ";
            }
            cout<<endl;
            continue;
        }
        if(o.size()==1){
            cout<<o[0]<<" ";
            int y=0;
            for(int x=0;x<e.size();x++){
                y+=e[x];
                cout<<o[0]+y<<" ";
            }
            cout<<endl;
            continue;
        }
        if(e.size()==0){
            for(int x=0;x<n;x++){
                if(x%2==1){
                    cout<<"0 ";
                }
                else{
                    cout<<o[0]<<" ";
                }
            }
            cout<<endl;
            continue;
        }
        cout<<o[0]<<" ";
        int a=0;
        int r=0;
        for(int x=0;x<e.size();x++){
            r+=e[x];
            cout<<o[0]+r<<" ";
        }
        for(int x=1;x<o.size();x++){
            if(x==o.size()-1){
                if(x%2==1){
                    cout<<"0 ";
                }
                else{
                    cout<<o[0]+r<<" ";
                }
            }
            else if(x%2==1){
                cout<<o[0]+r-e[e.size()-1]<<" ";
            }
            else{
                cout<<o[0]+r<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

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

// #include <bits/stdc++.h>
// using namespace std;

// void fast_io() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     std::cout.tie(NULL);
// }

// int main(){
//     fast_io();
//     int t;cin>>t;
//     while (t--) {
//         int n;cin>>n;
//         vector<long long>a,b;
//         for (int i=0;i<n;i++) {
//             long long x;cin>>x;
//             if (x%2!=0){a.push_back(x);}
//             else {b.push_back(x);}
//         }
//         sort(a.rbegin(),a.rend());
//         sort(b.rbegin(),b.rend());
//         int o=a.size();
//         int e=b.size();
//         vector<long long>p(e+1,0);
//         for(int i=0;i<e;i++){
//             p[i+1]=p[i]+b[i];
//         }
//         for(int k=1;k<=n;k++){
//             int c=max(1,k-e);
//             if(c%2==0){c++;}
//             if(c>o or c>k){
//                 cout<<"0 ";
//             } 
//             else{
//                 cout<<a[0]+p[k-c]<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }