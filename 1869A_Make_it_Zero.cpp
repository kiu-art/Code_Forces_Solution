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
        int n;cin>>n;
        vector<int> v(n);
        for(auto &x:v){
            cin>>x;
        }
        if(n%2==0){
            cout<<2<<"\n"<<1<<" "<<n<<"\n"<<1<<" "<<n;
        }
        else{
            cout<<4<<"\n"<<1<<" "<<n-1<<"\n"<<1<<" "<<n-1<<"\n"<<n-1<<" "<<n<<"\n"<<n-1<<" "<<n;
        }
        cout<<"\n";
    }
    return 0;
}