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
        int a,b,c;cin>>a>>b>>c;
        if(c%2==1){//b turn
            if(b<=a){cout<<"First";}
            else{cout<<"Second";}
        }
        else{//a turn
            if(a<=b){cout<<"Second";}
            else{cout<<"First";}
        }
        cout<<"\n";
    }
    return 0;
}