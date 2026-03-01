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
//     for(int u=1;u<=t;u++){
//         int n;cin>>n;
//         string s1,s2;cin>>s1>>s2;
//         // if(u==42){
//         //     cout<<s1<<s2;
//         // }
//         int e=0;
//         int a=0,b=0;
//         int a1=count(s1.begin(),s1.end(),'0');
//         int b1=count(s2.begin(),s2.end(),'0');
//         int f=-1;
//         if(a1!=b1){
//             cout<<"NO"<<endl;
//             continue;
//         }
//         for(int x=n-1;x>=0;x--){
//             if(f==1){
//                 if(s1[x]=='0'){
//                     s1[x]='1';
//                 }
//                 else{
//                     s1[x]='0';
//                 }
//             }
//             if(s1[x]==s2[x]){
//                 if(a!=b){
//                     e=1;
//                     break;
//                 }
//                 // a1-=a;
//                 // b1-=b;
//                 // int c=a1;
//                 // a1=b1;
//                 // b1=a1;
//                 if(a==0){
//                     continue;
//                 }
//                 a=0;
//                 b=0;
//                 f*=-1;
//                 continue;
//             }
//             else if(s1[x]=='0'){
//                 a++;
//                 a1--;
//             }
//             else{
//                 b++;
//             }
//             if(a==b){
//                 // a1-=a;
//                 // b1-=b;
//                 a=0;
//                 b=0;
//                 f*=-1;
//                 // int c=a1;
//                 // a1=b1;
//                 // b1=a1;
//             }
//         }
//         if(a!=b){
//             e=1;
//         }
//         if(e==1){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
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
        int n;cin>>n;
        string s1,s2;cin>>s1>>s2;
        int f=-1;
        int a=0,b=0;
        a=count(s1.begin(),s1.end(),'0');
        b=count(s1.begin(),s1.end(),'1');
        // cout<<a<<b;
        int e=0;
        for(int x=n-1;x>=0;x--){
            if(f==1){
                if(s1[x]=='1'){
                    s1[x]='0';
                }
                else{
                    s1[x]='1';
                }
            }
            if(s1[x]!=s2[x]){
                if(a!=b){
                    e=1;
                    // cout<<x<<" ";
                    break;
                }
                else{
                    int c=a;
                    a=b;
                    b=c;
                    if(s1[x]=='1'){
                        s1[x]='0';
                    }
                    else{
                        s1[x]='1';
                    }
                    f*=-1;
                }
            }
            if(s1[x]=='0'){
                a--;
            }
            else{
                b--;
            }
        }
        if(e==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}