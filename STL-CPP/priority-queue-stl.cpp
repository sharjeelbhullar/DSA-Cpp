#include<bits/stdc++.h>
using namespace std;
int main() {
    //Max heap
    priority_queue<int> numbers;
    numbers.push(1);
    numbers.push(8);
    numbers.push(6);
    numbers.push(5);
    numbers.push(2);
    numbers.push(3);

    cout << numbers.top() << endl;


    //Min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);

    cout << pq.top() << endl;
    
}