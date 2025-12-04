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
        int n,b;cin>>n>>b;
        int r=n;
        int a=n-1;
        int i=0;
        if(a%4==3){i=0;}
        else if(a%4==0){i=a;}
        else if(a%4==2){i=a+1;}
        else{i=1;}
        if(b==i){cout<<r;}
        // else if(b==i-1 and n!=1){cout<<r+1;}
        // else if(b==i+1 and n!=1){cout<<r+1;}
        // else if(i>1){cout<<r+2;}
        else if(i==0 and n==b){cout<<r+2;}
        else if((i^b)==n){cout<<r+2;}
        // else if(i==1 and n%2==0){cout<<r+2;}
        else{cout<<r+1;}
        cout<<endl;
    }
    return 0;
}