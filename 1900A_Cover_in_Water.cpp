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
    for(int u=0;u<t;u++){
        int n;cin>>n;
        string w;cin>>w;
        int result=0;
        if(n>2){
        for(int x=0;x<w.length()-2;x++){
            if(w[x]=='.' and '.'==w[x+1] and '.'==w[x+2]){
                result=2;
                break;
            }
        }}
        if(result==0){
            for(auto x:w){
                if(x=='.'){result++;}
            }
        }
        cout<<result<<endl;
    }
    return 0;
}