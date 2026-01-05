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
        int a,b;cin>>a>>b;
        int x=a;int y=b;
        int w=0;
        int d=0;
        int e=1;
        int l=1;
        int f=1;
        while(f){
            w++;
            if(e){
                a-=l;
                e=0;
                if(a<0){
                    w--;
                    f=0;
                    break;
                }
                l+=l;
            }
            else{
                e=1;
                b-=l;
                if(b<0){
                    w--;
                    f=0;
                    break;
                }
                l+=l;
            }
        }
        a=x;
        b=y;
        l=1;
        e=0;
        d=w;
        w=0;
        f=1;
        while(f){
            w++;
            if(e){
                e=0;
                a-=l;
                if(a<0){
                    w--;
                    f=0;
                    break;
                }
                l+=l;
            }
            else{
                e=1;
                b-=l;
                if(b<0){
                    w--;
                    f=0;
                    break;
                }
                l+=l;
            }
        }
        cout<<max(d,w)<<endl;
    }
    return 0;
}

// #include <bits/stdc++.h> 
// using namespace std; 
// #define int long long

// void fast_io() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     std::cout.tie(NULL);
// }

// signed main() {
//     fast_io(); 
//     int t;cin>>t;
//     while(t--){
//         int a,b;cin>>a>>b;
//     }
//     return 0;
// }