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

// void print5(int n){
//     for(int i=n; i>=1; i--){
//         for(int j=i; j>=1; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void print6(int n){
//     for(int i=n; i >= 1; i--){
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// void print7(int n){
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout << " ";
//         }
//         for(int j=0; j<2*i+1; j++)
//         {
//             cout << "*";
//         }
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void print8(int n){
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<i; j++)
//         {
//             cout << " ";
//         }
//         for(int j=0; j<2*n-(2*i+1); j++)
//         {
//             cout << "*";
//         }
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void print9(int n){
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout << " ";
//         }
//         for(int j=0; j<2*i+1; j++)
//         {
//             cout << "*";
//         }
//         for(int j=0; j<n-i-1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<i; j++)
//         {
//             cout << " ";
//         }
//         for(int j=0; j<2*n-(2*i+1); j++)
//         {
//             cout << "*";
//         }
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void print10(int n){
//     for(int i = 1; i<=2*n-1; i++){
//         int stars = i;
//         if(i > n) stars = 2*n-i;
//         for(int j=1; j<=stars; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int start = 1;
// void print11(int n){
//     for(int i=0; i<n; i++){
//         if(i%2 == 0) start = 1;
//         else start = 0;
//         for(int j=0; j<=i; j++){
//             cout << start;
//             start = 1-start;
//         }
//         cout << endl;
//     }
// }

// void print12(int n){
//     int space = 2*(n-1);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }
//
//         for(int j=1; j<=space; j++){
//             cout << " ";
//         }
//
//         for(int j=i; j>=1; j--){
//             cout << j;
//         }
//         cout << endl;
//         space -= 2;
//     }
// }

void print13(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num += 1;
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
        print13(n);
    }


}