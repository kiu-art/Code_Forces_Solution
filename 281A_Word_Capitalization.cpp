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
    string s;cin>>s;
    int x=s[0];
    if(x<96){cout<<s;return 0;}
    char a=s[0]-32;
    s[0]=a;
    cout<<s;
    return 0;
}