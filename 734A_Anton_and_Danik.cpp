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
    vector<char> v(t);
    int a=0;
    int b=0;
    for(auto &x:v){
        cin>>x;
        if(x=='A'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a==b){
        cout<<"Friendship";
    }
    else if(a>b){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }
    cout<<"\n";
    return 0;
}