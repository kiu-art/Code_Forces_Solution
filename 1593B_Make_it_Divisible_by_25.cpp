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
        string s;cin>>s;
        int min=100;
        int n=s.length();
        for(int x=s.length()-1;x>=0;x--){
            if(s[x]=='0'){
                for(int y=x-1;y>=0;y--){
                    if(s[y]=='0' or s[y]=='5'){
                        if(n-y-2<min){
                            min=n-y-2;
                        }
                    }
                }
            }
            if(s[x]=='5'){
                for(int y=x-1;y>=0;y--){
                    if(s[y]=='2' or s[y]=='7'){
                        if(n-y-2<min){
                            min=n-y-2;
                            // cout<<x<<" "<<y<<"\n";
                        }
                    }
                }
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
        // string n;cin>>n;
        // int res=0;
        // int s=stoll(n);
        // while (!n.empty()) {
        //     s = stoll(n);
        //     if (s % 25 == 0) break;
        //     res++;
        //     if(n[n.length()-1]=='5' and (count(n.begin(),n.end(),'2')!=0 or count(n.begin(),n.end(),'7')!=0)){
        //         n.pop_back();
        //         n.pop_back();
        //         n.push_back('5');
        //         continue;
        //     }
        //     if(n[n.length()-1]=='0' and (count(n.begin(),n.end(),'0')!=1 or count(n.begin(),n.end(),'5')!=0)){
        //         n.pop_back();
        //         n.pop_back();
        //         n.push_back('0');
        //         continue;
        //     }
        //     n.pop_back();
        // }
        // cout<<res<<endl;
// int e=0;
        // int a=0;
        // int res=0;
        // for(int x=0;x<19;x++){
        //     if(n[n.length()-1]!='0' and n[n.length()-1]!='5'){
        //         n.pop_back();
        //         res++;
        //     }
        //     if(n[n.length()-1]=='0' and a==0){
        //         if(count(n.begin(),n.end(),'5')==0 and count(n.begin(),n.end(),'0')==1 ){
        //             n.pop_back();
        //             res++;
        //         }
        //         else{
        //             a=1;
        //         }
        //     }
        //     if(n[n.length()-1]=='5' and a==0){
        //         if(count(n.begin(),n.end(),'2')==0 and count(n.begin(),n.end(),'7')==0){
        //             n.pop_back();
        //             res++;
        //         }
        //         else{
        //             a=2;
        //         }
        //     }
        //     if(a==1){
        //         if(n[n.length()-2]!='0' and n[n.length()-2]!='5'){
        //             n.pop_back();
        //             n.pop_back();
        //             n.push_back('0');
        //             res++;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     else if(a==2){
        //         if(n[n.length()-2]!='2' and n[n.length()-2]!='7'){
        //             n.pop_back();
        //             n.pop_back();
        //             n.push_back('5');
        //             res++;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //}