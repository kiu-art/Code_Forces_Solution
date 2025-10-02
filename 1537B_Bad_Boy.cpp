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
        int n,m,i,j;cin>>n>>m>>i>>j;
        int a=0;int b=0;
        if(m/2+m%2<i){
            a=1;
        }
        if(n/2+n%2<j){
            b=1;
        }
        int e=n;
        n=m;
        m=e;
        switch (a+(b*2)){
            case 0:
                cout<<m<<" 1"<<" 1 "<<n<<endl;
                break;
            case 1:
                cout<<"1 1 "<<m<<" "<<n<<endl;
                break;    
            case 2:
                cout<<"1 1 "<<m<<" "<<n<<endl;
                break;
            case 3:
                cout<<m<<" 1"<<" 1 "<<n<<endl;
                break;
        }
    }
    return 0;
}