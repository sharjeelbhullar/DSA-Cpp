#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<string> names = {"Sherry", "Ali", "Ahmad", "Striver", "Raj"};
    for (string name : names) {
        cout << name << endl;
    }

    // Get the first element
    cout << names[0];

    // Get the second element
    cout << names[1];

    // Get the first element
    cout << names.front();

    // Get the last element
    cout << names.back();

    // Get the second element
    cout << names.at(1);

    // Get the third element
    cout << names.at(2);

    // Try to access an element that does not exist (will throw an exception)
    cout << names.at(5);

    // Change the value of the first element
    names[0] = "Sharjeel";

    // Add an element at the beginning
    names.push_front("SA");

    // Add an element at the end
    names.push_back("BJ");

    // Remove the first element
    names.pop_front();

    // Remove the last element
    names.pop_back();

    //check size
    cout << names.size();

    //check if empty
    cout << names.empty();

    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << endl;
    }

    for (string name : names) {
        cout << name << "\n";
    }

    
}