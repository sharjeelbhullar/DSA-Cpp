#include<bits/stdc++.h>
using namespace std;
int main() {
    //declard a string type list 
    list<string> names;

    names = {"Sharjeel", "Ahmad", "Ali", "Ahamd"};

    for(string name : names){
        cout << name << endl;
    }

    //Get the first element
    cout << names.front() << endl;

    //Get the last element
    cout << names.back() << endl;

    //you can change the list by just assigning the value at any particular index in a list
    names.front() = "Sherry";
    cout << "After changing the front value of a list: " << names.front() << endl;

    names.back() = "Friend";
    cout << "After changing the back value of a list: " << names.back() << endl;

    //removes the first element
    names.pop_back();
    //removes the last element
    names.pop_front();

    //check size
    cout << names.size() << endl;

    //check if empty(output = 1) or not empty(output = 0)
    cout << names.empty() << endl;

    //loop through a list

    for(string e : names){
        cout << e << endl;
    }
    

//    for(int i=0; i<names.size(); i++){
//        cout << names[i] << endl;
//    }

    return 0;
}