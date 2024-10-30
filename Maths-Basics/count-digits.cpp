#include<bits/stdc++.h>
using namespace std;
int main() {
    // count digits using log
    int value;
    cout << "Enter a value: " << endl;
    cin >> value;
    int count = (int)(log10(value) + 1);
    cout << "Total digits = " << count;

}