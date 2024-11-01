#include<bits/stdc++.h>
using namespace std;
void getPrime(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count += 1;
        }
    }
    if(count == 2){
        cout << n << " is a prime number.";
    }
    else cout << n << " is not a prime number.";
}
int main(){
    //What is prime number: A number which has two factors 1 and itself.
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    getPrime(n);
    return 0;
}

