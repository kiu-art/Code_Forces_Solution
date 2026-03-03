#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int solve(int n,int m){
    int r=0;
    while(n>1){
        r++;
        // cout<<n<<" ";
        n=(n/2)+(n%2);
    }
    n=m;
    // cout<<"adasd";
    while(n>1){
        // cout<<n<<" ";
        r++;
        n=(n/2)+(n%2);
    }
    // cout<<"da";
    return r;
}


signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n,m,a,b;cin>>n>>m>>a>>b;
        int i=min(n-a+1,a);
        int j=min(m-b+1,b);
        cout<<min(solve(i,m),solve(n,j))+1<<endl;
    }
    return 0;
}