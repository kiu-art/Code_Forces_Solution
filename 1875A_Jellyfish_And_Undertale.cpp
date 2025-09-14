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
        int a,b,n;cin>>a>>b>>n;
        int result=b;
        int x;
        for(int y=0;y<n;y++){
            cin>>x;
            if(x>=a){
                result+=a-1;
            }
            else{
                result+=x;
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}