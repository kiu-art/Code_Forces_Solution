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
    int n;cin>>n;
    for(int x=0;x<n;x++){
        int a,b;cin>>a>>b;
        vector<int> v(a);
        for(auto &y:v){cin>>y;}
        int c=(b-v[a-1])*2;
        int d=0;
        for(auto y:v){
            if(abs(d-y)>c){
                c=abs(d-y);
            }
            d=y;
        }
        cout<<c<<endl;
    }
    return 0;
}