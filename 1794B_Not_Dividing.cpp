#include <iostream> 
#include <vector>   
#include <algorithm> 
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
        vector<int> v(n);
        int b=0;
        for(auto &x:v){
            cin>>x;
            if(x==1){
                x++;
            }
            if(b!=0 and x%b==0){
                x++;
            }
            b=x;
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}