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
//         int n;cin>>n;
//         char c;
//         vector<pair<int,int>> v(26);
//         for(int x=0;x<n;x++){
//             cin>>c;
//             v[c-97].second++;
//         }
//         int f=count_if(v.begin(),v.end(),[](
//                 const pair<int,int> &b
//             ){
//                 return b.second==1;
//             }
//         );
//         int e=count_if(v.begin(),v.end(),[](
//                 const pair<int,int> &b
//             ){
//                 return b.second>=2;
//             }
//         );
//         cout<<f+(e*2)<<"\n";
//     }
//     return 0;
// }
// 
// 
// 
// 

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
//         set<char> s1;
//         set<char> s2;
//         int a=0;
//         int b=0;
//         int e=0;
//         set<char> s3;
//         set<char> s4;
//         string st;
//         cin>>st;
//         for(int x=0;x<n;x++){
//             char c=st[x];
//             if(b==0){
//                 s1.insert(c);
//             }
//             if(b==1){
//                 s2.insert(c);
//             }
//             if(b==0 and s1.size()==a){
//                 b=1;
//                 s2.insert(c);
//                 s3.insert(s1.begin(),s1.end());
//             }
//             else if(b==1 and s2.size()==e){
//                 s3.insert(st.begin(),st.begin()+x);
//                 s4.insert(st.begin()+x,st.end());
//                 if(s3.size()+s4.size()>=s1.size()+s2.size()){
//                     s1.insert(s2.begin(),s2.end());
//                     s2.clear();
//                     s2.insert(c);
//                 }
//             }
//             a=s1.size();
//             e=s2.size();
//         }
//         // if(u==445){
//         //     cout<<st;
//         // }
//         if(b==0){
//             cout<<n<<"\n";
//         }
//         else{
//             cout<<s1.size()+s2.size()<<"\n";
//         }
//         // for(auto x:s1){cout<<x;}cout<<" ";
//         // for(auto x:s2){cout<<x;}
//     }
//     return 0;
// }


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
//         int n;cin>>n;
//         string s;
//         cin>>s;
//         int w=0;
//         int e=0;
//         int k=0;
//         int res=0;
//         set<char> s1;
//         set<char> s2;
//         set<char> s4;
//         for(int x=0;x<n;x++){
//             s1.insert(s[x]);
//             if(e==0 and s1.size()==w){
//                 s4.insert(s.begin()+x,s.end());
//                 int i=s4.size();
//                 res=w+i;
//                 e=1;
//             }
//             if(e==1){
//                 s2.insert(s[x]);
//                 if(s2.size()==k){
//                     set<char> s3;
//                     s3.insert(s.begin()+x,s.end());
//                     int r=s3.size();
//                     if(res<=s1.size()+r){
//                         // cout<<res<<" "<<x<<" ";
//                         res=s1.size()+r;
//                         k=0;
//                         s2.clear();s2.insert(s[x]);
//                     }
//                 }
//                 k++;
//             }
//             w++;
//         }
//         if(e==0){
//             cout<<n<<"\n";
//             continue;
//         }
//         cout<<res<<"\n";
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
        string s;
        cin>>s;
        int e=0;int f=0;
        vector<pair<int,int>>v(n+1);
        set<int>s1;
        set<int>s2;
        for(int x=0;x<n;x++){
            s1.insert(s[x]);
            s2.insert(s[n-1-x]);
            if(x==n/2){
            }
            v[x].first=s1.size();
            v[n-2-x].second=s2.size();
        }
        sort(v.begin(),v.end(),[](
            const auto &a,
            const auto &b
        ){
            return a.first+a.second>b.first+b.second;
        });
        cout<<v[0].first+v[0].second<<"\n";
    }
    return 0;
}