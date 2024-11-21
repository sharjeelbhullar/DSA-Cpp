#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array: " << endl; 
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        //pre compute
        mpp[arr[i]]++;
    }
    //pre compute
    

    // iterate in the map
    for(auto it : mpp) {
    cout << it. first << "->" << it.second << endl;
    }

    int q;
    cout << "Enter the value of q: " << endl;
    cin >> q;
    while(q--) {
        int number;
        cout << "Enter the value of number: " << endl;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }
    return 0;
}