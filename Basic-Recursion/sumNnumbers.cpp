#include<bits/stdc++.h>
using namespace std;
//parameterized way
void sumOfNumbers(int n, int sum){
    if(n==0){
        cout << "Sum -> " << sum << endl;
        return;
    }
    //1 method
    sum += n;
    sumOfNumbers(n-1, sum);
    //2 method
    //sumOfNumbers(n-1, sum+n);
}

//functional way
int sumOfN(int n){
    if(n==0) return 0;
    return n + sumOfN(n-1);
}

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    sumOfNumbers(n, 0);
    cout << "Functional Way: " << sumOfN(n);
}