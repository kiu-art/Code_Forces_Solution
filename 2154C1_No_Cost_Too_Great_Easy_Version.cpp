// // #include <bits/stdc++.h> 
// // using namespace std;
// // #include<numeric> 
// // #define int long long

// // void fast_io() {
// //     std::ios_base::sync_with_stdio(false);
// //     std::cin.tie(NULL);
// //     std::cout.tie(NULL);
// // }

// // signed main() {
// //     fast_io(); 
// //     int t;cin>>t;
// //     while(t--){
// //         int n;cin>>n;
// //         vector<int>v;
// //         int c;
// //         int d=0;
// //         int e=0;
// //         int f=0;
// //         for(int x=0;x<n;x++){
// //             cin>>c;
// //             if(d==1){
// //                 continue;
// //             }
// //             for(auto y:v){
// //                 if(__gcd(c,y)>1){
// //                     d++;
// //                     break;
// //                 }
// //                 if(__gcd(c+1,y)>1){
// //                     f=1;
// //                 }
// //                 else if(__gcd(c,y+1)>1){
// //                     f=1;
// //                 }
// //             }
// //             if(d==1){
// //                 cout<<"0\n";
// //                 e=1;
// //             }
// //             v.push_back(c);
// //         }
// //         int z;
// //         for(int x=0;x<n;x++){
// //             cin>>z;
// //         }
// //         if(e==1){
// //             continue;
// //         }
// //         if(f==1){
// //             cout<<"1\n";
// //         }
// //         else{
// //             cout<<"2\n";
// //         }
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <numeric>
// #include <algorithm>

// // Use the standard namespace to avoid writing "std::" repeatedly.
// using namespace std;

// // Define "int" as "long long" for safety with large numbers, a common practice.
// #define int long long

// // The maximum value of a number can be 2*10^5. We check a[i]+1, so we need a little more space.
// const int MAX_VAL = 200002;

// // This array will store the Smallest Prime Factor (SPF) for each number.
// // It's global so we only have to create it once.
// int spf[MAX_VAL];

// // This function calculates the smallest prime factor for all numbers up to MAX_VAL.
// // We run this only one time before solving any test cases.
// void sieve() {
//     // Step 1: Initialize every number's smallest prime factor to be the number itself.
//     for (int i = 0; i < MAX_VAL; i++) {
//         spf[i] = i;
//     }

//     // Step 2: Find primes and mark their multiples.
//     for (int i = 2; i * i < MAX_VAL; i++) {
//         // If 'i' is still its own smallest prime factor, then 'i' is a prime number.
//         if (spf[i] == i) {
//             // Now, for all multiples of this prime 'i'...
//             for (int j = i * i; j < MAX_VAL; j += i) {
//                 // ...if their smallest prime factor hasn't been found yet...
//                 if (spf[j] == j) {
//                     // ...mark 'i' as their smallest prime factor.
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
// }

// // This function gets all unique prime factors of a number 'n' very quickly.
// vector<int> get_prime_factors(int n) {
//     vector<int> factors;
//     if (n <= 1) {
//         return factors;
//     }
    
//     // Keep dividing n by its smallest prime factor until n becomes 1.
//     while (n > 1) {
//         int prime_factor = spf[n];
//         factors.push_back(prime_factor);
        
//         // Remove all occurrences of this prime factor from n.
//         while (n > 1 && spf[n] == prime_factor) {
//             n = n / prime_factor;
//         }
//     }
//     return factors;
// }

// // This function contains the main logic for solving a single test case.
// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<int> b(n); // We read the 'b' array but don't use it.

//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) cin >> b[i];

//     // These boolean arrays track which prime factors we have seen so far.
//     // They are created fresh for each test case.
//     vector<bool> seen_in_a(MAX_VAL, false);
//     vector<bool> seen_in_a_plus_1(MAX_VAL, false);
    
//     // Assume the worst-case cost is 2. We will try to find a cost of 0 or 1.
//     int min_cost = 2;

//     for (int i = 0; i < n; i++) {
//         int current_val = a[i];
        
//         vector<int> factors_a = get_prime_factors(current_val);
//         vector<int> factors_a_plus_1 = get_prime_factors(current_val + 1);

//         // --- Check for Cost 0 ---
//         // Do the factors of a[i] match any factors of previous numbers in 'a'?
//         for (int prime_factor : factors_a) {
//             if (seen_in_a[prime_factor]) {
//                 min_cost = 0;
//                 break; // Found cost 0, no need to check further.
//             }
//         }
//         if (min_cost == 0) {
//             break; // Exit the main loop if we found the best answer.
//         }

//         // --- Check for Cost 1 ---
//         // Case A: gcd(a[i], a[j]+1) > 1?
//         for (int prime_factor : factors_a) {
//             if (seen_in_a_plus_1[prime_factor]) {
//                 min_cost = min(min_cost, 1LL);
//             }
//         }
//         // Case B: gcd(a[i]+1, a[j]) > 1?
//         for (int prime_factor : factors_a_plus_1) {
//             if (seen_in_a[prime_factor]) {
//                 min_cost = min(min_cost, 1LL);
//             }
//         }
        
//         // --- Remember the factors from the current number for future checks ---
//         for (int prime_factor : factors_a) {
//             seen_in_a[prime_factor] = true;
//         }
//         for (int prime_factor : factors_a_plus_1) {
//             seen_in_a_plus_1[prime_factor] = true;
//         }
//     }

//     cout << min_cost << "\n";
// }

// signed main() {
//     // Speeds up input and output.
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     // Run the sieve once before starting.
//     sieve();

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
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
//     for(int u=1;u<=t;u++){
//         int n;cin>>n;
//         set<int> v;
//         vector<int> h;
//         int a=0;
//         int s;
//         int e=0;
//         int g=0;
//         int f=0;
//         for(int x=0;x<n;x++){
//             cin>>a;
//             h.push_back(a);
//         }
//         sort(h.begin(),h.end());
//         for(auto a:h){
//             if(e==1){continue;}
//             for(auto z:v){
//                 if(a%z==0){
//                     e=1;
//                     break;
//                 }
//                 if(g==0 and (a+1)%z==0){
//                     g=1;
//                 }
//             }
//             if(f==0 and a%2==0){
//                 v.insert(2);
//                 f=1;
//             }
//             for(int y=3;y<=a;y+=2){
//                 if(a%y==0){
//                     a/=y;
//                     v.insert(y);
//                 }
//             }
//         }
//         reverse(h.begin(),h.end());
//         if(e==0 and g==0){
//             for(auto a:h){
//                 if(e==1){continue;}
//                 for(auto z:v){
//                     if(g==0 and (a+1)%z==0){
//                         g=1;
//                     }
//                 }
//                 if(f==0 and a%2==0){
//                     v.insert(2);
//                     f=1;
//                 }
//             }
//         }
//         for(int x=0;x<n;x++){
//             cin>>s;
//         }
//         if(e==1){
//             cout<<"0\n";
//         }
//         else if(f==1 or g==1){
//             cout<<"1\n";
//         }
//         else{
//             cout<<"2\n";
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
int ma=200010;
vector<int> p(ma);
vector<set<int>> num(ma);
void sieve(){
    for(int x=1;x<ma;x++){
        p[x]=x;
    }
    for(int x=2;x<ma;x++){
        if(p[x]==x){
            for(int y=x*x;y<ma;y+=x){
                if(p[y]==y){
                    p[y]=x;
                }
            }
        }
    }
}
int factor(int n){
    if(n<2){return 0;}
    set<int> s;
    int l=n;
    while(n>=2){
        s.insert(p[n]);
        n/=p[n];
    }
    num[l].insert(s.begin(),s.end());
    return 0;
}
signed main() {
    fast_io();
    int t;cin>>t;
    sieve();
    while(t--){
        int n;cin>>n;
        vector<bool> seen(ma,false);
        vector<bool> seenplus(ma,false);
        vector<int> j(n);
        int e=0;
        int g=0;
        for(int x=0;x<n;x++){
            cin>>j[x];
            int a=j[x];
            if(e==1){
                continue;
            }
            if(num[a].size()==0){
                factor(a);
            }
            if(num[a+1].size()==0){
                factor(a+1);
            }
            for(auto p:num[a]){
                if(seen[p]){
                    e=1;
                    break;
                }
                if(seenplus[p]){
                    g=1;
                }
            }
            if(e==1){continue;}
            if(g==0){
                for(auto p:num[a+1]){
                    if(seen[p]){
                        g=1;
                    }  
                }
            }
            for(auto p:num[a]){
                seen[p]=true;
            }
            for(auto p:num[a+1]){
                seenplus[p]=true;
            }
        }
        int a;
        for(int x=0;x<n;x++){
            cin>>a;
        }
        if(e==1){
            cout<<"0\n";
        }
        else if(g==1){
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }
    }
    return 0;
}