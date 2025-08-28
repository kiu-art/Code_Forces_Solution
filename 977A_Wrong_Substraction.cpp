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
    string a;int b;cin>>a>>b;
    for(int x=0;x<b;x++){
        if(a[a.length()-1]=='0'){
            a=a.substr(0,a.length()-1);
            
        }
        else{
            int c=stoi(a);
            c--;
            a=to_string(c);
        }
    }
    cout<<a;
    return 0;
}