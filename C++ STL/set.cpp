#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainSet(){

    //Stores only unique elements and in ascending order.

    set<int> st1;
    st1.insert(2);
    st1.insert(4);
    st1.insert(6);
    st1.insert(8);
    st1.emplace(8);

    //Printing the set
    for(auto i : st1){ cout << i << " "; }
    cout << endl;

    //Finding an element
    //If element not found, it returns nothing
    auto it = st1.find(6);
    if(it != st1.end()) {
        cout << *it;
    }
    cout << endl;

    cout << st1.count(8); //If element present, then returns 1, else 0

    st1.erase(8); //Will delete all 8's in the set.
    for(auto i : st1){ cout << i << " "; }
    cout << endl;

    auto it = st1.end();
    it--;
    st1.erase(it); //Will delete condition mentioned in it
    for(auto i : st1){ cout << i << " "; }
    cout << endl;

    auto it2 = st1.begin();
    it2++;
    auto it3 = st1.end();
    it3--;
    st1.erase(it2, it3);
    for(auto i : st1){ cout << i << " "; }
    cout << endl;

    // Lower Bound -> Returns an iterator that point to an element that is >= given element.
    auto it = st1.lower_bound(4);
    cout << *it;
    
    // Upper Bound -> Returns an iterator > given number.
    auto it = st1.upper_bound(4);
    cout << *it;

    //Anything not in the set, will point to end() iterator.
}

int main(){
    explainSet();
    return 0;
} 