#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
#include<map>
using namespace std;

void explainMaps(){

    //Smaller keys will be in the first place
    //Unique keys

    map<int, string> mpp;
    mpp[1] = "Alvin";
    mpp[2] = "Ananya";
    mpp[3] = "Ganesh";
    mpp.insert({4, "Gowri"});
    mpp.emplace(5, "Someone");

    for(auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    auto i = mpp.find(4); //Points to the address
    cout << (*i).first << " -> " << (*i).second << endl;
    
    auto it1 = mpp.find(6);
    if(it1==mpp.end()) {
        cout << "Not Found!";
    }
    cout << endl;
    
    cout << mpp.size() << endl;

    // Lower Bound -> Returns an iterator that point to an element that is >= given element.
    auto it2 = mpp.lower_bound(4);
    cout << (*it2).first << " -> " << (*it2).second << endl;
    
    // Upper Bound -> Returns an iterator > given number.
    auto it3 = mpp.upper_bound(4);
    cout << (*it3).first << " -> " << (*it3).second << endl;

    if(mpp.empty()){
        cout << "It's Empty";
    }
    else {
        cout << "It's Not Empty!";
    }
    cout << endl;

    mpp.erase(1);
    for(auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    mpp.erase(mpp.begin(), mpp.find(3)); // deletes elements before key 2
    for(auto it : mpp) {
     cout << it.first << " -> " << it.second << endl;
    }

    mpp.clear();
    if(mpp.empty()){
        cout << "It's Empty";
    }
    else {
        cout << "It's Not Empty!";
    }
    cout << endl;
}
void explainUnorderedMaps(){
    unordered_map<int, string> mpp;
    mpp[1] = "Alvin";
    mpp[3] = "Ganesh";
    mpp.insert({4, "Gowri"});
    mpp.emplace(5, "Someone");
    mpp[2] = "Ananya";

    for(auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }
}
void explainMultiMap(){

    //Sorted according to the key value

    multimap<int, char> mpp;
    mpp.insert({3, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'c'});
    mpp.insert({1, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'c'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'b'});

    for(auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << "============" << endl;

    auto it = mpp.equal_range(2);
    for(auto i = it.first; i != it.second; i++) {
        cout << (*i).first << " -> " << (*i).second << endl;
    }
}


int main(){
    explainMultiMap();
    return 0;
}