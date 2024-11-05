#include<bits/stdc++.h>
using namespace std;
void f(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);
}

int main() {
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter values of array: " << endl;
    for(int i=0; i<n; i++){
        cout << "Value of index " << i << " = ";
        cin >> arr[i];
    }
    f(0, arr, n);
    cout << endl << "After reversing the array" << endl;
    for(int i=0; i<n; i++){
        cout << "Value at index " << i << " = " << arr[i] << endl;
    }
    return 0;
}