#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainMultiSet(){

    //Same as set, but can store repeating elements

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(5);

    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    auto it1 = ms.find(1); // This will find the first 1 in the set.
    auto it2 = ms.erase(1); //Will delete all 1's
    auto it3 = ms.erase(ms.find(1)); //Will delete the first 1.
    for(auto it3 : ms){
        cout << it3 << " ";
    }
    cout << endl;

    cout << ms.count(1); //Gives the count of all 1's.

    // Lower Bound -> Returns an iterator that point to an element that is >= given element.
    auto it = ms.lower_bound(4);
    cout << *it;
    
    // Upper Bound -> Returns an iterator > given number.
    auto it = ms.upper_bound(4);
    cout << *it;
}

int main(){
    explainMultiSet();
    return 0;
} 