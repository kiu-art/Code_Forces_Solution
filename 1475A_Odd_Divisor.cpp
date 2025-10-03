#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    if(n%2==1){
	        cout<<"YES\n";
	        continue;
	    }
	    int a=0;
	    while(n>2){
	        if((n/2)%2==1){
	            cout<<"YES\n";
	            a++;
	            break;
	        }
	        n/=2;
	    }
	    if(a==0){
	        cout<<"NO\n";
	    }
	}
 
}