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
    vector<int> b(26,0);
    for(auto x:a){
        b[x-97]=1;
    }
    int d=count(b.begin(),b.end(),1);
    if(d%2==0){cout<<"CHAT WITH HER!";return 0;}
    else{cout<<"IGNORE HIM!";}
    return 0;
}