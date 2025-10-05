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
//     while(t--){
//         int n,k;cin>>n>>k;
//         if(k==4*n - 5 or k>4*n-4){
//             cout<<"NO\n";
//             continue;
//         }
//         else if(n==1 and k==0){
//             cout<<"NO\n";
//             continue;
//         }
//         cout<<"YES\n";
//         int a=k;
// for (int x = 0; x < n; x++)
// {
//     for (int y = 0; y < n; y++)
//     {
//         if (x == 0)
//         {
//             if (a != 0)
//             {
//                 cout << "U";
//                 a--;
//             }
//             else
//             {
//                 cout << "D";
//             }
//         }
//         else if (x != n - 1)
//         {
//             if (a != 0)
//             {
//                 if (y == 0)
//                 {
//                     cout << "L";
//                     a--;
//                 }
//                 else if (y != n - 1)
//                 {
//                     if (x != n - 2 or x == 1)
//                     {
//                         cout << "D";
//                     }
//                     else
//                     {
//                         cout << "U";
//                     }
//                 }
//                 else if (a != 0)
//                 {
//                     cout << "R";
//                     a--;
//                 }
//             }
//             else
//             {
//                 if (y == 0)
//                 {
//                     cout << "R";
//                 }
//                 else if (y != n - 1)
//                 {
//                     if (x != n - 2 or x == 1)
//                     {
//                         cout << "D";
//                     }
//                     else
//                     {
//                         cout << "U";
//                     }
//                 }
//                 else
//                 {
//                     cout << "L";
//                 }
//             }
//         }
//         else
//         {
//             if (a != 0)
//             {
//                 cout << "D";
//                 a--;
//             }
//             else if (y == 0)
//             {
//                 cout << "R";
//             }
//             else if (y == n - 1)
//             {
//                 cout << "L";
//             }
//             else
//             {
//                 cout << "U";
//             }
//         }
//     }
//     cout << endl;
// }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define int long long

void fast_io()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if ((n * n) - 1 == k)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        int e = 0;
        int a = k;
        // if (k < (n - 1) * 4)
        // {
            for (int x = 0; x < n; x++)
            {
                for (int y = 0; y < n; y++)
                {
                    if (k != 0)
                    {
                        cout << "U";
                        k--;
                    }
                    else if (e == 1 and y == n - 1)
                    {
                        cout << "L";
                    }
                    else if (x == n - 1)
                    {
                        cout << "R";
                        e = 1;
                    }
                    else
                    {
                        cout << "D";
                    }
                }
                cout << endl;
            }
        // }

        // else
        // {
        //     for (int x = 0; x < n; x++)
        //     {
        //         for (int y = 0; y < n; y++)
        //         {
        //             if (x == 0)
        //             {
        //                 if (a != 0)
        //                 {
        //                     cout << "U";
        //                     a--;
        //                 }
        //                 else
        //                 {
        //                     cout << "D";
        //                 }
        //             }
        //             else if (x != n - 1)
        //             {
        //                 if (a != 0)
        //                 {
        //                     if (y == 0)
        //                     {
        //                         cout << "L";
        //                         a--;
        //                     }
        //                     else if (y != n - 1)
        //                     {
        //                         if (x != n - 2 or x == 1)
        //                         {
        //                             cout << "D";
        //                         }
        //                         else
        //                         {
        //                             cout << "U";
        //                         }
        //                     }
        //                     else if (a != 0)
        //                     {
        //                         cout << "R";
        //                         a--;
        //                     }
        //                 }
        //                 else
        //                 {
        //                     if (y == 0)
        //                     {
        //                         cout << "R";
        //                     }
        //                     else if (y != n - 1)
        //                     {
        //                         if (x != n - 2 or x == 1)
        //                         {
        //                             cout << "D";
        //                         }
        //                         else
        //                         {
        //                             cout << "U";
        //                         }
        //                     }
        //                     else
        //                     {
        //                         cout << "L";
        //                     }
        //                 }
        //             }
        //             else
        //             {
        //                 if (a != 0)
        //                 {
        //                     cout << "D";
        //                     a--;
        //                 }
        //                 else if (y == 0)
        //                 {
        //                     cout << "R";
        //                 }
        //                 else if (y == n - 1)
        //                 {
        //                     cout << "L";
        //                 }
        //                 else
        //                 {
        //                     cout << "U";
        //                 }
        //             }
        //         }
        //         cout << endl;
        //     }
        // }
    }
    return 0;
}