#include<bits/stdc++.h>
using namespace std;
int main() {
    queue<string> names;
    //same rule cannot add elements like vector

    // Pushing names onto the queue
    names.push("Sherry");
    names.push("Ali");
    names.push("Ahmad");
    names.push("Striver");
    names.push("Raj");

    cout << names.front() << endl;

    cout << names.back() << endl;

    //same like stack you can change front and back elements
    names.front() = "Sharjeel";
    names.back() = "Mentor";

    //remove the element
    names.pop();

    //size of the queue
    cout << names.size() << endl;

    //check queue is empty or not
    cout << names.empty();

    return 0;

}