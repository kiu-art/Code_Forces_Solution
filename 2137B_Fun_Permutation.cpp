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
        int n;cin>>n;
        int b=n+1;
        int a=0;
        while(n--){cin>>a;cout<<b-a<<" ";}
        cout<<"\n";
    }
    return 0;
}