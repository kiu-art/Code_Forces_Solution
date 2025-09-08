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
        if(a==b){cout<<"0 \n";}
        else if(a%b==0 or b%a==0){cout<<"1 \n";}
        else{cout<<"2 \n";}
    }
    return 0;
}