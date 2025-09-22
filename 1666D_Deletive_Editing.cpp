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
//         string s,a;cin>>s>>a;
//         int c=a.length();
//         int e=0;
//         while(e==0){
//             if(s.length()<=c){e=2;break;}
//             for(int x=0;x<s.length()-c and e!=1;x++){
//                 // if(s[x]==a[0]){
//                 //     s.erase(0,x);
//                 //     x=0;
//                 // }
//                 for(int y=0;y<c;y++){
//                     if(s[x+y]!=a[y]){
//                         // cout<<s[x+y]<<"  ";
//                         s.erase(x+y,1);
//                         //cout<<s<<"  \n";
//                         x=-1;
//                         break;
//                     }
//                     if(y==c-1){
//                         e=1;
//                     }
//                 }
//             }
//             if(e==1){
//                 for(int x=c;x<s.length();x++){
//                     for(auto y:a){
//                         if(y==s[x]){
//                             e=0;
//                             s.erase(1,1);
//                             break;
//                         }
//                     }
//                 }
//             }
//         }
//         if(s.substr(0,c)==a){cout<<"YES\n";}
//         else{cout<<"NO\n";}
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
        string s,a;cin>>s>>a;
        int n=a.length()-1;
        int m=n;
        int e=0;
        for(int x=s.length()-1;x>=0;x--){
            if(s[x]!=a[n]){
                // cout<<s[x]<<"  ";
                for(int y=0;y<=x;y++){
                    if(s[y]==s[x]){
                        s.erase(y,1);
                        y--;
                        x--;
                    }
                }
                // cout<<s<<" "<<n<<"     ";
                x=s.length()-(m-n);
            }
            else{
                n--;
            }
            
        }
        if(a==s){
            cout<<"YES\n";
        }
        else{cout<<"NO\n";}
    }
    return 0;
}