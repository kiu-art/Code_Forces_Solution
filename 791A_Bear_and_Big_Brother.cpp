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
    int a,b;cin>>a>>b;
    int result=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        result++;
    }
    cout<<result;
    return 0;
}