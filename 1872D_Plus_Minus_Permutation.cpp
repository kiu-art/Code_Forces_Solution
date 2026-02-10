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
//         int n,a,b;cin>>n>>a>>b;
//         deque<int>v(n);
//         for(int x=n;x>=1;x--){
//             v[n-x]=x;
//         }
//         int r=0;
//         for(int x=a-1;x<n;x+=a){
//             if(x%b==0){
//                 continue;
//             }
//             r+=v[0];
//             v.pop_front();
//         }
//         int i=v.size()-1;
//         for(int x=b-1;x<n;x+=b){
//             if(x%a==0){continue;}
//             r-=v[i];
//             i--;
//             v.pop_back();
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
        int n,a,b;cin>>n>>a>>b;
        int i=(n/a);
        int j=(n/b);
        int k=(n/((a*b)/__gcd(a,b)));
        i-=k;
        j-=k;
        int o=((n*(n+1))/2)-(((n-i)*(n-i+1))/2);
        int p=(j*(j+1))/2;
        cout<<o-p<<endl;
    }
    return 0;
}