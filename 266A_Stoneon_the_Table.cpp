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
    string s;cin>>s;
    int result=0;
    for(int x=0;x<n-1;x++){
        if(s[x]==s[x+1]){
            result++;
        }
    }
    cout<<result;
    return 0;
}