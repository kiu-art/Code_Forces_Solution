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
    int a,b,c;cin>>a>>b>>c;
    int result=0;
    for(int x=1;x<=c;x++){
        result+=a*x;
    }
    cout<<result-b;
    return 0;
}