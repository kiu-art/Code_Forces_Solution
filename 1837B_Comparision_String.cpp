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
        string s;cin>>s;
        char b='=';
        int e=1;
        int a=0;
        for(auto x:s){
            if(x==b){
                e++;
            }
            else{
                if(e>a){
                    a=e;
                }
                e=1;
            }
            b=x;
        }
        if(e>a){
            a=e;
        }
        cout<<a+1<<"\n";
    }
    return 0;
}