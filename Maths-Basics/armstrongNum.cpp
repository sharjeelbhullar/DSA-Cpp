#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int n = 0;
    int result = 0;
    
    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    
    // Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        result += pow(digit, n);
        temp /= 10;
    }
    
    return (result == originalNum);
}

int main() {
    int number;
    
    cout << "Enter a number to check if it's an Armstrong number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }
    
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    
    return 0;
}