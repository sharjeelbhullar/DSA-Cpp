#include<bits/stdc++.h>
using namespace std;
int main() {
    //Declaring an empty vector.
    vector<int> v;

    vector<string> vrr;
    vrr.push_back("Ali");
    vrr.push_back("Ahmad");
    vrr.push_back("Hamid");
    vrr.push_back("Sharjeel");
    vrr.emplace_back("Bhullar");

    //to remove last inserted value from the vector
    vrr.pop_back();

    //to print first value in a vector
    cout << "Using front function: " << vrr.front() << endl;

    //to print last value in a vector
    cout << "Using back function: " << vrr.back() << endl;

    //to print any value at a specific index
    cout << "Using vrr.at(index): " << vrr.at(1) << endl;

    //another way to print the value at any specific index
    cout << "Using vrr[index]: " << vrr[1] << endl;

    // to check if the vector is empty or not it will print 0 if not empty and print 1 if empty
    cout << vrr.size() << endl;
    cout << vrr.empty() << endl;
    
    for(string i : vrr){
        cout << i << endl;
    }


    
    //A vector of pair datatype.
    vector<pair<int, int>> vec;
    vec.push_back({5, 88});
    vec.emplace_back(77, 88);

    //Creating a vector of 5 length/size of 100 dummy values.
    vector<int> a(5, 100);
    cout << a[3] << endl;

    //Creating a vector of size 5.
    vector<int> b(5);

    //Creating a vector by the name of original
    vector<int> original(5, 20);
    //Copying the original vector into copy_of_original vector.
    vector<int> copy_of_original(original);

}