#include<bits/stdc++.h>
using namespace std;
//using Brute force approach
void checkGCD(int n1, int n2){
    int gcd = 1;
    for(int i=1; i<= min(n1,n2); i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    cout << "GCD = " << gcd;
}

int main(){
    int n1, n2;
    cout << "Enter number 1: " << endl;
    cin >> n1;
    cout << "Enter number 2: " << endl;
    cin >> n2;
    checkGCD(n1, n2);
    return 0;
}