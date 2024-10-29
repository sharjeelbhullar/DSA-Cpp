#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> people = {{"Sharjeel", 32}, {"Ahmad", 45}, {"Striver", 88}, {"Raj", 99}};
    // access a map
    cout << "Striver is: " << people["Striver"] << endl;

    cout << "Sharjeel is: " << people["Sharjeel"] << endl;

    cout << "Ahmad is " << people.at("Ahmad") << endl;
    //using at, will throw an error if the value doesn't exist

    //Changing values is also valid in it
    people["Sharjeel"] = 100;

    //add new elements
    people["Hashir"] = 77;
    people["Ali"] = 98;

    //insert function is also valid
    people.insert({"Sherry", 78});

    //to remove specific element use the erase function
    people.erase("Hashir");

    //also use the count element
    cout << people.count("Sherry");

    for(auto pair : people) {
        cout << pair.first << " is " << pair.second << endl;
    }
    //to remove all the elements
    people.clear();

    return 0;
}