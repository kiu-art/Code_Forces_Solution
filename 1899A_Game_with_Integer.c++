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
    for(int u=0;u<t;u++){
        int n;cin>>n;
        if(n%3==0){cout<<"Second";}
        else{cout<<"First";}
        cout<<"\n";
    }
    return 0;
}