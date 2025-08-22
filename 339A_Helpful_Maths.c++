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
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int x=(s.length()/2);x<s.length()-1;x++){cout<<s[x]<<"+";}cout<<s[s.length()-1];
    return 0;
}