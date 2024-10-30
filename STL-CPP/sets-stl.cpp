#include<bits/stdc++.h>
using namespace std;
int main() {
    //set is something which stores values that are sorted and unique
    // Create a set called cars that will store strings
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print set elements
    for (string car : cars) {
        cout << car << endl;
    }

    // Add new elements
    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Toyota");
    cars.insert("Audi");

    // Remove element
    cars.erase("VW");

    cout << "*****" << endl;

    for (string car : cars) {
        cout << car << "\n";
    }

    // Remove all elements
    cars.clear();
    cout << cars.size() << endl;
    cout << "*****" << endl;
    cout << cars.empty() << endl;

    cout << "*****" << endl;

    
    //Create a set called numbers that will store integers
    //it will sort in a sorted manner and will have unique values
    set<int> numbers = {1, 7, 3, 2, 5, 9};

    // Print set elements
    for (int num : numbers) {
        cout << num << endl;
    }

    cout << "****" << endl;

    //Sort elements in a set in descending order
    set<int, greater<int>> arr = {1, 7, 3, 2, 5, 9};
    //Print the elements
    for (int num : arr) {
        cout << num << endl;
    }

    return 0;

}