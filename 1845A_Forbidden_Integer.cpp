#include <iostream> 
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
        int n,k,x;cin>>n>>k>>x;
        vector<int> v;
        while(n>0){
            n-=k;
            v.push_back(k)
        }
    }
    return 0;
}