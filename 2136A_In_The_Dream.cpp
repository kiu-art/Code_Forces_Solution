//First Code Less Systematic
// #include <iostream> 
// #include <vector>   
// #include <algorithm> 
// using namespace std; 

// void fast_io() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     std::cout.tie(NULL);
// }

// int main() {
//     fast_io(); 
//     int t;cin>>t;
//     for(int u=0;u<t;u++){
//         cout<<"\n";
//         int a,b,c,d;cin>>a>>b>>c>>d;
//         if(a>=b and 2*(b+1)>=a and (d-b+1)*2>=c-a){
//             cout<<"YES";
//         }
//         else if(2*(a+1)>=b and (c-a+1)*2>=d-b){
//             cout<<"YES";
//         }
//         else{
//             cout<<"NO";
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool check(int x, int y) {
    if (x >= 3 && x > (y + 1)*2) {return false;}
    if (y >= 3 && y > (x + 1)*2) {return false;}
    return true;
}

int main() {
    fast_io();
    int t; cin >> t;
    while (t--) {
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        int r1=c-a,k1=d-b;
        if (check(a, b) and check(r1, k1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}