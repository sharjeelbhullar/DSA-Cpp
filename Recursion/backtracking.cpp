#include<bits/stdc++.h>
using namespace std;
void backTrack(int i, int n){
    if(i>n) return;
    backTrack(i+1, n);
    cout << i << endl;
}
int main() {
    int n;
    cout << "Enter the n number: " << endl;
    cin >> n;
    backTrack(1, n);
}