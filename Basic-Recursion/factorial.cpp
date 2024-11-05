#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    //Never return 0 in case of multiplication otherwise it will make your whole recursive function call to zero.
    if(n==1) return 1;
    return n * fact(n-1);
}
int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "Factorial = " << fact(n);
}