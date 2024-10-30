#include<bits/stdc++.h>
using namespace std;

//count digits that evenly divide the N in a number
int countDigits(int N){
    int count = 0;
    int original_N = N;
    while(N > 0) {
        int lastDigit = N % 10;
        if(lastDigit != 0 && original_N % lastDigit == 0) {
            count += 1;
        }

        N /= 10;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << countDigits(num);
    // int result = countDigits(num);
    // cout << "Total digits that evenly divide the number : " << result;

}