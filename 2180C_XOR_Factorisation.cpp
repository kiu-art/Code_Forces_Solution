#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n,l;cin>>n>>l;
        // if(l>2){
        //     for(int x=0;x<l-2;x++){
        //         cout<<n<<" ";
        //     }
        //     if((l-1)%2==0){
        //         cout<<n<<" ";
        //     }
        //     else{
        //         cout<<"0 ";
        //     }
        //     cout<<n<<endl;
        // }
        // else if(l==2){
        //     if((n-1)%2==0){
        //         cout<<"1 "<<n-1<<endl;
        //     }
        //     else{
        //         cout<<"0 "<<n<<endl;
        //     }
        // }
        // else{
        //     cout<<n<<endl;
        // }
        if(l%2==1){
            for(int x=0;x<l;x++){
                cout<<n<<" ";
            }
            cout<<endl;
        }
        else{
            for(int x=0;x<l-2;x++){
                cout<<n<<" ";
            }
            if((n-1)%2==0){
                cout<<"1 "<<n-1<<endl;
            }
            else{
                cout<<"0 "<<n<<endl;
            }
        }
    }
    return 0;
}