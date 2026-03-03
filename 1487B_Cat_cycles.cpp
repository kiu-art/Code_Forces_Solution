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
        int n,k;cin>>n>>k;
        if(n%2==0){
            cout<<((k%n)*(bool(k%n!=0))+(n)*bool(k%n==0))<<endl;
        }
        else{
            cout<<(((k-1)+(k-1)/(n/2))%n)+1<<endl;
        }
    }
    return 0;
}