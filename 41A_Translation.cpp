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
    string a;cin>>a;
    string b;cin>>b;
    if(a.length()!=b.length()){
        cout<<"NO";
        return 0;
    }
    for(int x=0;x<a.length();x++){
        if(a[x]!=b[b.length()-1-x]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}