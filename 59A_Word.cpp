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
    string a;cin>>a;
    int b=0;
    int c=0;
    for(auto x:a){
        if(x<95){b++;}
        else{c++;}
    }
    if(c>=b){
        for(auto &x:a){
            if(x<95){
                x+=32;
            }
        }
    }
    else{
        for(auto &x:a){
            if(x>95){
                x-=32;
            }
        }
    }
    cout<<a;
    return 0;
}