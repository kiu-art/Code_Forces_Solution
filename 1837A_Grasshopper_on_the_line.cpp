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
        int a,b;cin>>a>>b;
        if(a%b!=0){
            cout<<1<<"\n"<<a-0<<"\n";
        }
        else{
            cout<<2<<"\n"<<a-1<<" "<<1<<"\n";
        }
    }
    return 0;
}