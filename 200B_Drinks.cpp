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
    int b=t;
    float a;
    float result;
    while(t--){
        cin>>a;
        result+=a/100;
    }
    cout<<(result/b)*100;
    return 0;
}