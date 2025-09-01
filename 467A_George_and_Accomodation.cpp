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
    int result=0;
    while(t--){
        int a,b;cin>>a>>b;
        if(b-a>1){
            result++;
        }
    }
    cout<<result;
    return 0;
}