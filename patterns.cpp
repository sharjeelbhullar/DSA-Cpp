//patterns are going to print in this file. Hurray I'm very excited for the learning journey of my dsa. :)
#include<bits/stdc++.h>
using namespace std;

// void print1(int n){
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void print2(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j=1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void print3(int n){
//     for (int i= 1; i <= n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void print4(int n){
//     for (int i= 1; i <= n; i++){
//         for(int j=1; j<=i; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

void print5(int n){
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cout << "Number of test cases: " << endl;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cout << "Number of lines of pattern: " << endl;
        cin >> n;
        // print1(n);
        // print2(n);
        // print3(n);
        // print4(n);
        print5(n);
    }

}