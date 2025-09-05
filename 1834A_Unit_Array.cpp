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
        int n;cin>>n;
        vector<int> v(n);
        int sum=0;
        int mul=1;
        for(auto &x:v){cin>>x;
            sum+=x;
            mul*=x;
        }
        if(sum>=0 and mul>=0){
            cout<<0;
        }
        else if(sum>=0 and mul<0){
            cout<<1;
        }
        else if(sum<0){
            if(mul>0){
                if((-sum/2+bool(sum%2))%2==0){
                    cout<<-sum/2+bool(sum%2);
                }
                else{
                    cout<<-sum/2+bool(sum%2)+1;
                }
            }
            else{
                if((sum/2+bool(sum%2))%2==0){
                    cout<<-sum/2+bool(sum%2)+1;
                }
                else{
                    cout<<-sum/2+bool(sum%2);
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}