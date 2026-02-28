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
        string s;cin>>s;
        int i=0;
        int j=n-1;
        char a='3';
        int r1=0;
        int e=0;
        for(int x=0;x<n;x++){
            // cout<<x<<" ";
            if(x>=j){
                break;
            }
            if(s[x]!=s[j] and a=='3'){
                a=s[x];
                r1++;
            }
            else if(s[x]!=s[j]){
                if(s[x]!=a and s[j]!=a){
                    e=-1;
                    break;
                }
                r1++; 
                if(s[x]==a){
                    continue;
                }
                else if(s[j]==a){
                    j--;
                    x--;
                }
            }
            else{
                j--;
            }
        }
        j=n-1;
        a='3';
        int r2=0;
        string k(s.rbegin(),s.rend());
        int f=0;
        for(int x=0;x<n;x++){
            if(x>=j){
                break;
            }
            if(k[x]!=k[j] and a=='3'){
                a=k[x];
                r2++;
            }
            else if(k[x]!=k[j]){
                if(k[x]!=a and k[j]!=a){
                    f=-1;
                    break;
                }
                r2++;
                if(k[x]==a){
                    continue;
                }
                else if(k[j]==a){
                    j--;
                    x--;
                }
            }
            else{
                j--;
            }
        }
        if(e==0 and f==0){
            cout<<min(r1,r2)<<endl;
        }
        else if(e==-1 and f==-1){
            cout<<-1<<endl;
        }
        else if(e==-1){
            cout<<r2<<endl;
        }
        else{
            cout<<r1<<endl;
        }
    }
    return 0;
}
