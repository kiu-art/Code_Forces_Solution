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
//         string s;cin>>s;
//         int n=s.length();
//         if(s[0]=='*' and s[1]=='<'){
//             cout<<-1<<endl;continue;
//         }
//         if(s[n-1]=='*' and s[n-2]=='>'){
//             cout<<-1<<endl;continue;
//         }
//         int a=0;
//         int b=0;
//         int c=0;
//         int d=0;
//         int f=0;
//         int g=0;
//         char h='2';
//         for(int x=0;x<n;x++){
//             char e=s[x];
//             if(e=='>'){
//                 a++;
//                 if(a==1){
//                     c=x;
//                 }
//             }
//             else if(e=='<'){
//                 if(b==0){
//                     d=x;
//                 }
//                 if(h=='>'){
//                     cout<<-1<<endl;f=1;break;
//                 }
//                 b++;
//             }
//             else{
//                 if(a!=0 and g==0){
//                     cout<<-1<<endl; f=1;break;
//                 }
//                 g++;
//             }
//             h=e;
//         }
//         if(f==1){
//             continue;
//         }
//         if(g>1){
//             cout<<-1<<endl;continue;
//         }
//         else if(d>c and a!=0){
//             cout<<-1<<endl;continue;
//         }
//         else{
//             cout<<max(a,b)+g<<endl;
//         }
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
        int a=0;
        int b=0;
        int c=0;
        string s;cin>>s;
        int r=0;
        for(auto x:s){
            if(x=='*'){
                if(c!=0){
                    r=-1;
                }
                a++;
            }
            else if(x=='<'){
                b++;
                if(c!=0){
                    r=-1;
                }
                if(a!=0){
                    r=-1;
                }
            }
            else{
                c++;
            }
        }
        if(a>1){cout<<-1<<endl;}
        else if(r==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<max(b,c)+a<<endl;
        }
    }
    return 0;
}