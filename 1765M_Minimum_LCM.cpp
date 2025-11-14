// #include <bits/stdc++.h> 
// using namespace std; 
// #define int long long

// void fast_io() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     std::cout.tie(NULL);
// }
// int m=1000000;
// vector<int> p(m);

// void prime(){
//     for(int x=1;x<m;x++){
//         p[x]=x;
//     }
//     for(int x=1;x<m;x++){
//         if(x==p[x]){
//             for(int y=x*x;y<=m;y+=x){ 
//                 if(p[x]!=y){
//                     p[x]=x;
//                 }
//             }
//         }
//     }
// }
// int lcm(int a,int n){
//     int b=n-a;
//     if(b%a==0){
//         return b;
//     }
//     while(a){
//         if(b>m){return -1;}
//         b*=p[a];
//         if(b%a==0){
//             return b;
//         }
//         a/=p[a];
//         if(a==1){
//             break;
//         }
//     }
// }

// signed main() {
//     fast_io(); 
//     int t;cin>>t;
//     prime();
//     while(t--){
//         int n;cin>>n;
//         int i=0;
//         int c=m;
//         int a;
//         for(int x=1;x<=n/2;x++){
//             a=lcm(x,n);
//             if(a==-1){
//                 a=x*a;
//             }
//             if(a<c){
//                 c=a;
//                 i=x;
//             }
//         }
//         cout<<i<<" "<<n-i<<"\n";
//     }
//     return 0;
// }

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
        int e=0;
        if(n%2==0){cout<<n/2<<" "<<n/2<<endl; continue;}
        for(int x=3;x<=n;x+=2){
            if((n-x)%x==0){
                cout<<x<<" "<<n-x<<endl; e=1;break;
            }
        }
        if(e==1){
            continue;
        }
        else{
            cout<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}