#include <bits/stdc++.h> 
using namespace std; 
// #define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a=0;
        int b;
        int c=0;
        int u=n;
        map<int,pair<int,int>> v;
        while(u--){
            cin>>b;
            if(v[c].first<a and b!=c){
                v[c].first=a;
            }
            if(b!=c){
                a=0;
                c=b;
            }
            a++;
        }
        u=n;
        if(v[b].first<a){
            v[b].first=a;
        }
        a=0;
        while(u--){
            cin>>b;
            if(v[c].second<a and b!=c){
                v[c].second=a;
            }
            if(b!=c){
                a=0;
                c=b;
            }
            a++;
        }
        if(v[b].second<a){
            v[b].second=a;
        }
        vector<pair<int,pair<int,int>>> arr(v.begin(),v.end());
        sort(arr.begin(),arr.end(),[](
            const auto& a,
            const auto& b){
                return a.second.first+a.second.second>b.second.first+b.second.second;
            }
        );
        cout<<arr[0].second.first+arr[0].second.second<<"\n";
    }
    return 0;
}