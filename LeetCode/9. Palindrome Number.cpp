class Solution {
public:
    bool isPalindrome(int x) {
        //Method 1
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);

    //Method 2
        // if (x < 0 || (x != 0 && x % 10 == 0)) {
    //         return false;
    //     }

    //     int reversed = 0;
    //     while (x > reversed) {
    //         reversed = reversed * 10 + x % 10;
    //         x /= 10;
    //     }
    //     return (x == reversed) || (x == reversed / 10);
    // }


    //Method 3
    // if (x < 0 || (x % 10 == 0 && x != 0)) {
    //         return false;
    //     }
    //     int revertedNumber = 0;
    //     while (x > revertedNumber) {
    //         revertedNumber = revertedNumber * 10 + x % 10;
    //         x /= 10;
    //     }
    //     return x == revertedNumber || x == revertedNumber / 10;
    // }
    }
};