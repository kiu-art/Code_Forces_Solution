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
    int w,h,d,n;cin>>w>>h>>d>>n;
    int a=w,b=h,c=d;
    int m=n;
    for(int x=2;x<=m;x++){
            if(m%x==0){
                if(w%x==0){
                    w/=x;
                }
                else if(h%x==0){
                    h/=x;
                }
                else if(d%x==0){
                    d/=x;
                }
                else{
                    cout<<-1;
                    return 0;
                }
                m/=x;
                x=1;
            }
            if(m==1){
                break;
            }
        }
        cout<<(a/w)-1<<" "<<(b/h)-1<<" "<<(c/d)-1<<endl;
    return 0;
}