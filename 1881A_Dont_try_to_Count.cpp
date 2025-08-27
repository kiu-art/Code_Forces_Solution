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
    for(int u=0;u<t;u++){
        cout<<"ljbj";
        int a,b;
        cin>>a>>b;
        string c;
        string d;
        cin>>c>>d;
        int result=-1;
        int e=0;
        for(int x=0;x<b;x+=c.length()){
            cout<<"jbhjvjg";
            for(int y=0;y<c.length()-b;y++){
                if(c.length()>=b and c.substr(y,b)==d){
                    e=1;
                    break;
                }
            }
            c+=c;
            if(e==1){result=x;break;}
        }
        if(e==1){cout<<-1;}
        else{cout<<result<<"\n";}
    }
    return 0;
}