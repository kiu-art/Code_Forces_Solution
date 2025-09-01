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
    int n,t;cin>>n>>t;
    string a;cin>>a;
    while(t--){
        for(int x=0;x<n-1;x++){
            if(a[x]=='B' and a[x+1]=='G'){
                a[x]='G';
                a[x+1]='B';
                x++;
            }
        }
    }
    cout<<a;
    return 0;
}