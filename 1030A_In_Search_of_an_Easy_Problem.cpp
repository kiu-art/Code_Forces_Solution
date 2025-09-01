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
    int a;
    for(int x=0;x<t;x++){
        cin>>a;
        if(a==1){
            cout<<"Hard";
            return 0;
        }
    }
    cout<<"Easy";
    return 0;
}