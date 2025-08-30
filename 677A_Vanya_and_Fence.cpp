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
    vector<int> v(a);
    int c=a;
    for(auto &x:v){
        cin>>x;
        if(x>b){
            a++;
        }
    }
    cout<<a;
    return 0;
}