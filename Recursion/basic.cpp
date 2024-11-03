#include<bits/stdc++.h>
using namespace std;
//print n times
void func(int i, int n){
    //base case
    if(i > n) return;

    cout << i << ": Striver" << endl;
    
    //recursive function call
    func(i+1, n);
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    func(1, n);
}