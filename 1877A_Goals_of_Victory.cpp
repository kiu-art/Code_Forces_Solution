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
        int a;cin>>a;
        vector<int> v(a-1);
        int result=0;
        for(int x=0;x<a-1;x++){cin>>v[x];result+=v[x];}
        cout<<-result<<"\n";
    }
    return 0;
}