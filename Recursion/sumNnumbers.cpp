#include<bits/stdc++.h>
using namespace std;
void sumOfNumbers(int n, int sum){
    if(n==0){
        cout << "Sum -> " << sum;
        return;
    }
    //1 method
    sum += n;
    sumOfNumbers(n-1, sum);
    //2 method
    //sumOfNumbers(n-1, sum+n);
}
int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    sumOfNumbers(n, 0);
} 