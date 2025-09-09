#include <iostream> 
#include <vector>   
#include <algorithm> 
#include<math.h>
using namespace std; 

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int leng(int f){
    int digit=0;
    while(f>=1){
        f/=10;
        digit++;
    }
    return digit;
}
main() {
    fast_io();
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        int y=0;
        string b=to_string(a);
        int len=10;
        for(int y=1;y<1000000000;y++){
            int len=leng(y);
            long long concat=a;
            for(int h=0;h<len;h++){concat*=10;}
            concat+=y;
            if(concat%(a+y)==0){
                cout<<y<<"\n";
                break;
            }            
        }
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

// Function to count digits in a number
int count_digits(int num) {
    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

int main() {
    int t;cin>>t;
    while(t--){
    int x;
    cin >> x;

    for (int y = 1; y < 1000000000; y++) {
        int len_y = count_digits(y);
        // Compute x#y = x * 10^len_y + y
        long long concat = x;
        for (int i = 0; i < len_y; i++) {
            concat *= 10;
        }
        concat += y;

        if (concat % (x + y) == 0) {
            cout << y << endl;
            break;
        }
    }
}
    return 0;
}
