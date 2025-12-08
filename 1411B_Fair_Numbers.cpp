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
        int n;cin>>n;
        int e=1;
        while(e){
            int a=n;
            while(a!=0){
                int c=a%10;
                if(c!=0){
                    if(n%c){
                        n++;
                        break;
                    }
                }
                a/=10;
            }
            if(a==0){e=0;}
        }
        cout<<n<<endl;
    }
    return 0;
}