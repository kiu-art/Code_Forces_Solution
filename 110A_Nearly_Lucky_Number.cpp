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
    for(auto x:a){
        if(x=='4' or x=='7'){
            b++;
        }
    }
    if(b!=0){
        if(b==4 or b==7){
            cout<<"YES";
        }
        else{cout<<"NO";}
    }
    else{
        cout<<"NO";
    }
    return 0;
}