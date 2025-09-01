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
    int a=0;
    int b=0;
    int c,d;
    while(n--){
        cin>>c>>d;
        a-=c;
        a+=d;
        if(a>b){
            b=a;
        }       
    }
    cout<<b;
    return 0;
}