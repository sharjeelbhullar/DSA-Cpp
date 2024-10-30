// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter a number : " << endl;
//     cin >> num;
//     int reverseNumber = 0;
//     int sign = num < 0 ? -1 : 1;
//     num = abs(num);
//     while(num > 0) {
//         int lastDigit = num % 10;
//         reverseNumber = (reverseNumber * 10) + lastDigit;
//         num /= 10;
//     }
//     cout << sign * reverseNumber;
// }


#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int ans = 0 ;
        while(x != 0){
            int digit = x % 10 ;
            if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
                return 0;
            }
            ans = ans * 10 + digit ;
            x = x / 10 ;
        }
        return ans ;
}

int main() {
    int x = -1534236469; // Example input
    cout << "Reversed: " << reverse(x) << endl;
    return 0;
}
