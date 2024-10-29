#include<bits/stdc++.h>
using namespace std;
int main() {
    //creating a vector of type string
    vector<string> names = {"Sherry", "Ahmad", "Striver", "Raj"};

    //creating a vector iterator called 'it'
    vector<string> :: iterator it;

    // The type of the iterator must match the type of the data structure it should iterate through (string in this example)

    //Loop through the vector with the iterator
    cout << "First loop using iterator" << endl;
    for(it = names.begin(); it != names.end(); it++){
        cout << *it << endl;
    }
    cout << endl;

    //auto keyword
    //auto it = names.begin();
    cout << "Second loop using auto keyword: " << endl;
    for(auto it = names.begin(); it != names.end(); it++){
        cout << *it << endl;
    }

    cout << endl;

    cout << "Third loop using for each loop: " << endl;
    for(string elements : names){
        cout << elements << endl;
    }

    cout << endl;

    //Example
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through vector elements
    for (auto it = cars.begin(); it != cars.end(); ) {
        if (*it == "BMW") {
            it = cars.erase(it); // Remove the BMW element
        }   
        else{
            ++it;
        }
    }

    cout << endl;

    cout << "Fourth loop using for loop to print vector elements: " << endl;
    // Print vector elements
    for (const string& car : cars) {
        cout << car << "\n";
    }

    cout << endl;
    
    cout << "Fifth loop using reverse function: " << endl;
    for(auto it=cars.rbegin(); it != cars.rend(); it++){
        cout << *it << endl;
    }

    return 0;
}