#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainList(){

    //List allows you to insert in the beggining, unlike vectors.
    //Underlying concept is based on Linked List!

    list<int> ls = {6, 7};
    ls.push_back(1);
    ls.push_back(8);
    ls.emplace_back(2);
    ls.emplace_back(3);

    ls.push_front(0); //Inserts in the beginning

    cout << "List after inserting (0) in front: " << endl;
    for(auto i : ls){
        cout << i << " ";
    }
    cout << endl;
    cout << "--------------------" << endl;

    cout << "The Size of the List: ";
    cout << ls.size() << endl;
    cout << "--------------------" << endl;

    cout << "First Element:" << ls.front() << endl;
    cout << "Last Element:" << ls.back() << endl;
    cout << "--------------------" << endl;
    
    cout << "Inserting Elements: " << endl;
    ls.insert(ls.begin(), 11);
    ls.insert(ls.end(), 99);
    auto itr = next(ls.begin());
    auto itr1 = prev(prev((ls.end())));
    ls.insert(itr, 222);
    ls.insert(itr1, 888);
    for(auto i : ls){ cout << i << " "; }
    cout << endl;
    cout << "--------------------" << endl;

    cout << "Popping out last element: " << endl;
    ls.pop_back();
    for(auto i : ls){ cout << i << " "; }
    cout << endl;
    cout << "--------------------" << endl;

    cout << "Erasing elements: " << endl;
    auto start = next(ls.begin());
    auto end = prev(prev((ls.end())));
    ls.erase(start, end);
    for(auto i : ls){ cout << i << " "; }
    cout << endl;
    cout << "--------------------" << endl;

    cout << "Duplicating..." << endl;
    list<int> dupLs(ls);
    for(auto i : dupLs){ cout << i << " "; }
    cout << endl;

    dupLs.push_back(56);
    cout << "--------------------" << endl;
    
    cout << "Swapping after inserting 56: " << endl;
    swap(ls, dupLs);
    cout << "Current ls (Should contain dupLs): " << endl;
    for(auto i : ls){ cout << i << " "; }
    cout << endl;
    cout << "Current dupLs (Should contain ls): " << endl;
    for(auto i : dupLs){ cout << i << " "; }
    cout << endl;
    cout << "--------------------" << endl;

    ls.clear();
    cout << "If you see this, then Ls is gone! RIP!" << endl;
    cout << "--------------------" << endl;
}

int main(){
    explainList();
    return 0;
}