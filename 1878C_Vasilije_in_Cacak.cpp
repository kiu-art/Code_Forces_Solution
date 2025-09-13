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
        int n,k,x;cin>>n>>k>>x;
        int e=0;
        if((k*(k+1))/2>x){
            cout<<"NO";
            e=1;
        }
        k=n-k;
        if(e==0){
            if(((n*(n+1))/2)-((k*(k+1))/2)<x){cout<<"NO";}
            else{cout<<"YES";}
        }
        cout<<"\n";
    }
    return 0;
}