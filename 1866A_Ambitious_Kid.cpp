#include <iostream> 
#include <vector>   
#include <algorithm> 
#include <cmath>
using namespace std; 

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int main() {
    fast_io(); 
    int n;cin>>n;
    vector<int> v(n);
    int a=pow(10,5);
    for(auto &x:v){cin>>x; if(abs(x-0)<a){a=abs(x-0);}}
    cout<<a;
    return 0;
}
