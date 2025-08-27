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
        int a,b;
        cin>>a>>b;
        string c;
        string d;
        cin>>c>>d;
        int result=0;
        int e=0;
        while(c.length()<b){
            c+=c;
            result++;
        }
        for(int x=0;x<=c.length()-b;x++){
            if(c.substr(x,b)==d){
                if(x<a-b){
                cout<<0;
                e=1;
                break;}
                else{
                    cout<<result;
                    e=1;
                    break;
                }
            }
        }
        if(e==0){
            c+=c;
            result++;
                    for(int x=0;x<c.length()-b;x++){
            if(c.substr(x,b)==d){
                if(x<a-b){
                cout<<0;
                e=1;
                break;}
                else{
                    cout<<result;
                    e=1;
                    break;
                }
            }
        }
        }
        if(e==0){
            cout<<-1;
        }
        cout<<"\n";
    }
    return 0;
}