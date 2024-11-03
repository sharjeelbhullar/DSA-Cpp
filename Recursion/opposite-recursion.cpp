#include<bits/stdc++.h>
using namespace std;
void printNtimes(int i, int n){
    if(i < 1) return;
    cout << i << endl;
    printNtimes(i-1, n);
}
int main(){
    int n;
    cout << "Enter the enter to print the number in a reverse fashion: " << endl;
    cin >> n;
    printNtimes(n, n);
}