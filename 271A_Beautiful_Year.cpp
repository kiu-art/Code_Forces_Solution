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
    int e=1;
    string a;
    int f=0;
    while(e!=0){
        n++;
        f=0;
        a=to_string(n);
        for(auto x:a){
            if(count(a.begin(),a.end(),x)>1){
                break;
            }
            f++;
        }
        if(f==4){
            cout<<n;
            return 0;
        }
    }
    return 0;
}