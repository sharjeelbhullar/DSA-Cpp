#include <bits/stdc++.h>
using namespace std;

int main() {
    // stack uses LIFO (Last In First Out)
    stack<string> names;

    // Pushing names onto the stack
    names.push("Sherry");
    names.push("Ali");
    names.push("Ahmad");
    names.push("Striver");
    names.push("Raj");

    //remove the last added element
    names.pop();

    //Access the top element
    cout << names.top() << endl;

    //change the top element
    names.top() = "Sharjeel";

    //get the size of the stack
    cout << names.size() << endl;

    //check if stack is empty or not
    cout << names.empty() << endl;
    
    return 0;
}
