#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if(num < 0){
        cout << "false";
        return 0;
    }
    int original_num = num;
    int get_digit = 0;
    int reverse_num = 0;
    while(num != 0){
        get_digit = num % 10;
        reverse_num = (reverse_num * 10) + get_digit;
        num /= 10;
    }
    cout << reverse_num << endl;
    if(reverse_num == original_num){
        cout << "true";
    }
    else cout << "false";
}