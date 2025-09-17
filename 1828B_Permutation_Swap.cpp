#include <bits\stdc++.h> 
#include <vector>   
#include <algorithm> 
using namespace std; 

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a=0;
        vector<int> v(n);
        for(int x=0;x<n;x++){
            cin>>v[x];
            int y=abs((v[x]-1)-x);
            a=__gcd(a,y);
        }
        cout<<a<<"\n";
    }
    return 0;
}