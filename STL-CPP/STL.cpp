#include<bits/stdc++.h>
using namespace std;
void explainPair() {
    pair<int, int> p = {1, 3};
    pair<int, float> pa = {1, 4.5};
    pair<int, char> prr = {3, 'c'};
    pair<bool, int> parr = {true, 1};
    pair<string, int> pairr = {"Sharjeel", 89};
    //nested pairB
    pair<int, pair<int, float>> nes_pairs = {3, {4, 5.5}};
    //pairs in array
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout << p.first << " " << p.second << endl;
    cout << pa.first << " " << pa.second << endl;
    cout << prr.first << " " << prr.second << endl;
    cout << parr.first << " " << parr.second << endl;
    cout << pairr.first << " " << pairr.second << endl;
    cout << nes_pairs.first << " " << nes_pairs.second.first << " " << nes_pairs.second.second;
    cout << endl;
    cout << "Array pair 1: " << arr[0].first << " " << arr[0].second << endl;
    
    cout << "Array pair 2: " << arr[1].first << " " << arr[1].second << endl;
    
    cout << "Array pair 3: " << arr[2].first <<" " << arr[2].second << endl;
    
    
}

void explainVectors() {
    //If you want to store unknown elements and later want to modifiy the size you can not do it in arrays that's where the concept of vectors comes in.
    //Arrays are constant in size, you cannot modify its size after defining its size
    //Vectors are dynamic in nature which can update its size according to the need
    //Vector is a container which stores elements in a similar fashion as array does
    vector<int> vrr;

    vrr.push_back(1);
    vrr.emplace_back(2);

    vector<pair<int, int>> vrr_pair;

    vrr_pair.push_back({1, 2});
    vrr_pair.emplace_back(1, 2);

    //container of size 5 with pre-defined value 100 at each index
    vector<int> v(5, 100);

    //container with only size
    vector<int> vr(5);

    vector<int> v1(5, 10);
    //copy of vector v1
    vector<int> v2(v1);

    vector<int> vv1;
    vv1.push_back(5);
    vv1.push_back(10);
    vv1.push_back(12);
    vv1.push_back(17);
    vv1.push_back(32);
    //Access elements of vector, use the first method just like array
    cout << vv1[0] << " Or " << vv1.at(0) << endl;

    cout << vv1.back() << " " << endl;

    //iterator
    vector<int>::iterator it= vv1.begin();
    it++;
    //if not wrte * with iterator that means you're printing the memory address
    //but if you write * then element at that memory address will be accessed
    cout << *(it) << " " << endl;

    it = it + 2;
    cout << *(it) << " " << endl;
/*
    //end will point right after the last element
    vector<int>::iterator it= vv1.end();

    vector<int>::iterator it= vv1.rbegin();

    vector<int>::iterator it= vv1.rend();
*/
    //loop through the vector
    cout << "Using for loop" << endl;
    for(int i=0; i<size(vv1); i++){
        cout << vv1[i] << " ";
    }
    cout << endl;

    //iterator wise
    cout << "Using iterator wise method" << endl;
    for(vector<int>::iterator it = vv1.begin(); it != vv1.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    //short-way
    cout << "Using short method of iterator wise method" << endl;
    for(auto it = vv1.begin(); it != vv1.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    //foreach
    cout << "Using foreach loop" << endl;
    for(auto it : vv1){
        cout << it << " ";
    }
    cout << endl;

    //erase something in a vector
    vv1.erase(vv1.begin() + 1);

    //erase a sequence
    vv1.erase(vv1.begin()+1, vv1.begin()+3);

    //print size of vector
    cout << vv1.size();
    cout << endl;
    //insert function
    vector<int> v11(2, 100); //{100, 100}
    v11.insert(v11.begin(), 300); //{300, 100, 100}
    v11.insert(v11.begin()+1 , 2, 88); //{300, 88, 88, 100, 100}
    for(auto it : v11){
        cout << it << " ";
    }
    cout << endl;

    //insert some vector into another vector
    vector<int> copy(2, 50); //{50, 50}
    v11.insert(v11.begin()+1, copy.begin(), copy.end()); //{300, 50, 50, 88, 88, 100, 100}
    for(auto it: v11){
        cout << it << " ";
    }
    cout << endl;

    //pop back(pops out last element)
    v11.pop_back();

    for(auto it : v11){
        cout << it << " ";
    }
    //v1 -> {10, 20}
    //v2 -> {30, 40}
    //v1.swap(v2) -> v1={30, 40} v2={10, 20}

    v11.clear(); //erases the entire vector
    cout << endl;
    cout << size(v11);
    cout << endl;
    v11.push_back(1);
    cout << v11.empty(); //False(0) True(1)
}

void explainList() {
    //It is exactly similar to vector
    //But unlike vectors it gives you front operations as well
    //It's also dynamic in nature

    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    //In vectors we use insert function but it was very costly in terms of time complexity
    ls.push_front(1); //it is cheap than insert in terms of TC

    ls.emplace_front(0);

    for(auto it : ls){
        cout << it << " ";
    }
    //rest of the functions are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap, empty
}

void explainDeque() {
    deque<int>dq;
    dq.push_back(3);
    dq.push_front(2);
    dq.emplace_back(4);
    dq.emplace_front(1);

    for(auto it : dq){
        cout << it << " ";
    }

    // dq.front();
    // dq.back();

    //rest functions are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap, empty, etc.
}

void explainStack() {
    //works as LIFO(last in first out)
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2, 1}
    st.push(3); //{3, 2, 1}
    st.push(3); //{3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top() << endl; //print 5 "Indexing is not allowed here"
    //In stack there are only 3 generic functions [push, pop, top] to deal with

    st.pop(); //st looks like {3, 3, 2, 1}

    cout << st.top() << endl;

    cout << st.size() << endl;

    cout << st.empty() << endl;

    //swap
    //stack<int> st1, st2;
    //st1.swap(st2);
}

void explainQueue() {
    //Works as FIFO(first in first out)
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1, 2}
    q.emplace(4); //{1, 2, 4}

    q.back() += 5; //add 5 to 4(last value)
    
    cout << q.back() << endl; //prints 9

    // q is {1, 2, 9}
    cout << q.front() << endl; //prints 1(front)

    q.pop(); //{2,9}

    cout << q.front(); //prints 2

    //size swap empty and others are same as stack

    // all the operations are happening in constant time
}

void explainPQ() {
    //Max Heap
    priority_queue<int> pq;
    //Larger value stays at the top
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.push(10); //{10,8,5,2}

    cout << pq.top() << endl; //prints 10

    pq.pop();
    
    cout << pq.top() << endl;

    //size swap empty function same as others

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>>pq1;
    pq1.push(5); //{5}
    pq1.push(2); //{2,5}
    pq1.push(8); //{2,5,8}
    pq1.emplace(10); //{2,5,8,10}

    cout << pq1.top(); //prints 2
}

void explainSet() {
    //stores everything in a sorted order and unique
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}
    st.insert(5); // {1,2,3,4,5}
    auto it = st.find(7);
    
    for(auto it : st){
        cout << it << " ";
    }

    cout << "\n";

    //erases 5, takes logarithmic time
    st.erase(5); //{1,2,3,4}

    //returns 0 if element is not available else print 1
    int cnt = st.count(1);
    cout << cnt << "\n";

    int cntt = st.count(7);
    cout << cntt << endl;

    //{1, 2, 3, 4}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    //just like we read in vector -> erase(start, end) similar to that also exist here
    //it will remove elements from 2 to 4 but 4 is not included
    st.erase(it1, it2); //after erase (1,4)

    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);
}

void explainMultiset() {
    //it can store multiple occurence but in a sorted manner
    //elements are only stored in sorted form 
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    
    ms.erase(1); //all 1's erased

    int cnt = ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1)); //{1, 1}

    //erase two 1's
    // ms.erase(ms.find(1), ms.find(1)+2);

    // rest all funtions are same as set
}

void explainUSet() {
    //everything is similar to set but it doesn't stored elements in a sorted manner.
    //it doesn't store in a sorted manner but it stores only unique elements.
    unordered_set<int> st;
    /*
    lower_bound and upper_bound function does not work, 
    rest all functions are same as above, it does not store
    in any particular order it has  a better complexity
    than set in most cases, except some when collision happens
    */
}

void explainMap() {
    //data-type <key, value> name
    //every pair(key,value) will be stored in a unique sorted way of key
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;
/*
    mpp[1] = 2;

    mpp.emplace({3, 1});

    mpp.insert({2, 4});

    mpp[{2,3}] = 10;
*/
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[5] << endl;

    //it will access to memory address using find method
    auto it = mpp.find(3);
    //in order to access the element you need to put the star
    // cout << *(it).second;

    //if not find then it will put the iterator after the end
    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty, are same as above
}

void explainMultiMap() {
    //everything is similar to map, but it can store multiple/duplicate keys
    //only mpp[key] cannot be used here
}

void explainUnorderedMap() {
    //same as map but it is not sorted i.e. it is randomized
    //it will not have duplicate keys i.e only unique keys 
}

int main() {
    // explainPair();
    // explainVectors();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiset();
    // explainUSet();
    // explainMap()
    // explainMultiMap();
    // explainUnorderedMap();
}   