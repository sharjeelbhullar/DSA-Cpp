#include<bits/stdc++.h>
using namespace std;
int main() {
    //It is a pair container using two values just like arrays.
    pair<string, string> p = {"Sharjeel", "Ahmad"};

    //You can access each value one at a time. Cannot excess whole pair using cout.
    // //cout << p.first << " " << p.second << endl;

    //Yes multiple pairs in a pair is allowed you can do nesting in it.
    pair<string, pair<string, string>> m = {"Sharjeel", {"Bhullar", "Jutt"}};
    
    //Here is the same rule, cannot access whole pair using cout.
    cout << m.first << " " << m.second.first << " " << m.second.second << endl;

    //An array of pair data type.
    pair<int, int>arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

    //Printing will work like default array indexing base values.
    cout << arr[4].second << endl;

    return 0;
}