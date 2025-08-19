//least line of codee

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<(n/a+bool(n%a))*(m/a+bool(m%a));
    return 0;
}

//for faster
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    if(m%a==0 and n%a==0){cout<<((n/a)*(m/a)); return 0;}
    if(m%a!=0 and n%a!=0){cout<<((n/a)+1)*((m/a)+1); return 0;}
    if(m%a!=0 and n%a==0){cout<<(n/a)*((m/a)+1); return 0;}
    if(m%a==0 and n%a!=0){cout<<((n/a)+1)*((m/a)); return 0;}    
    return 0;
}