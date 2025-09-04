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
    int n;cin>>n;
    if(n%2==1){
        cout<<-(n/2)-1;
    }
    else{
        cout<<n/2;
    }
    return 0;
}