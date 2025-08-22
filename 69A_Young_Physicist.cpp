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
    vector<int> r(3,0);
    int a,b,c;
    for(int x=0;x<n;x++){
        cin>>a>>b>>c;
        r[0]+=a;r[1]+=b;r[2]+=c;
    }
    int d=count(r.begin(),r.end(),0);
    if(d==3){cout<<"YES";return 0;}
    cout<<"NO";
    return 0;
}