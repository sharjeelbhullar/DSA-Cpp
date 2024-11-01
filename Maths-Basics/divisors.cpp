#include<bits/stdc++.h>
using namespace std;

void printDivisors(int N){
    cout << "Divisors are: ";
    for(int i=1; i<=N; i++){
        if(N % i == 0){
            cout << i << " ";        
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    printDivisors(num);
    return 0;

}