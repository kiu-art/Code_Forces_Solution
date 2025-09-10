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
        int a,b,c,d;cin>>a>>b>>c>>d;
        if(a==c and b==d){cout<<0;}
        else if(d<b){cout<<-1;}
        else if(d==b and a<c){cout<<-1;}
        else {
            if(d-b<c-a){cout<<-1;}
            else if(c>a){
                cout<<(c-a)+((d-b)-(c-a))*2;
            }
            else{
                cout<<(a-c)+((d-b)*2);
            }
        }
        cout<<"\n";
    }
    return 0;
}