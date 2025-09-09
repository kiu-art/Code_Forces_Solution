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
        int a;cin>>a;
        string s;
        cin>>s;
        vector<int> v(a);
        for(int x=0;x<a;x++){v[x]=stoi(string(1,s[x]));}
        vector<int> arr=v;
        int b=0;
        b=count(v.begin(),v.end(),0);
        int c=0;
        for(int x=0;x<b;x++){
            if(v[x]==1){
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}