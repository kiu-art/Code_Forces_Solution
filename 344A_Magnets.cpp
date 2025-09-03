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
    int result=1;
    int b;
    int e=0;
    while(t--){
        cin>>a;
        if(e==1){
            if(a!=b){
                result++;
            }
        }
        e=1;
        b=a;
    }
    cout<<result;
    return 0;
}