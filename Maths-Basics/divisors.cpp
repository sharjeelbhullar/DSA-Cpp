#include<bits/stdc++.h>
using namespace std;
//Time complexity is equal to O(N)
void printDivisors(int N){
    cout << "Divisors are: ";
    for(int i=1; i<=N; i++){
        if(N % i == 0){
            cout << i << " ";        
        }
    }
    cout << endl;
}
//O(sqrt(N) x log(sqrt(N))) more efficient for larger values
void getDivisors(int N){
    vector<int> ls;
    for(int i=1; i*i<=(N); i++){
        if(N%i == 0){
            ls.push_back(i);
            if(N/i != i){
                ls.push_back(N/i);
            }
        }
    }
    sort(ls.begin(), ls.end());

    for(auto pr : ls){
        cout << pr << " ";
    }
}

int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    printDivisors(num);
    getDivisors(num);
    return 0;

}