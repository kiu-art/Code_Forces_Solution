#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
const long long INV6 = 166666668;
const long long INV2 = 500000004;
signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int m=1000000007;
        // int k=(((n%m)*(n+1)%m)*((2*n)+1)%m)%m*INV6%m;
        // int r=(k-(((n*(n+1))%m)*INV2%m));
        // int a=((2*k)r)%m;
        cout<<n*(n+1)%m*(4*n-1)%m*337%m<<endl;
    }
    return 0;
}