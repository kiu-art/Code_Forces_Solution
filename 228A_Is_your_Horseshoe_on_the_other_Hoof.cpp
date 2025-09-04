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
    vector<int> v(4);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    int a=0;
    int result=0;
    for(auto x:v){
        if(x==a){
            result++;
        }
        a=x;
    }
    cout<<result;
    return 0;
}