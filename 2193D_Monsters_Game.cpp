#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int search(vector<int>&v,int a){
    int l=0;
    int r=v.size()-1;
    int mid;
    while(l<r){
        mid=(l+r)/2;
        if(v[mid]==a){
            break;
        }
        if(v[mid]>a){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return mid;
}

signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int x=0;x<n;x++){
            cin>>a[x];
        }
        vector<int>b(n);
        for(int x=0;x<n;x++){
            cin>>b[x];
        }
        sort(a.begin(),a.end());
        for(int x=1;x<n;x++){
            b[x]=b[x]+b[x-1];
        }
        int r=0;
        for(int x=0;x<n;x++){
            int c=a[x];
            int d=(n-x);
            int e=search(b,d);
            if(e+2>=n){
                e=n-1;
            }
            else{
                e+=2;
            }
            // cout<<b[e]<<" "<<c<<"   ";
            while(b[e]>d){
                e--;
                if(e<0){
                    break;
                }
            }
            r=max(((e+1)*c),r);
        }
        cout<<r<<endl;
    }
    return 0;
}