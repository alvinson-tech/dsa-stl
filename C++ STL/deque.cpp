#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainDeque(){

    deque<int> dq = {1, 2};
    dq.push_back(3);
    dq.emplace_back(4);

    dq.push_front(11);
    dq.emplace_front(22);

    for(auto i : dq){ cout << i << " "; }
    cout << endl;

    cout << "The Size of the Deque: ";
    cout << dq.size() << endl;
    cout << "--------------------" << endl;

    cout << "First Element:" << dq.front() << endl;
    cout << "Last Element:" << dq.back() << endl;
    cout << "--------------------" << endl;

    cout << "Inserting Elements: " << endl;
    dq.insert(dq.begin(), 44);
    dq.insert(dq.end(), 99);
    dq.insert(dq.begin() + 1, 33);
    dq.insert(dq.end() - 1, 88);
    for(auto i : dq){ cout << i << " "; }
    cout << endl;
    cout << "--------------------" << endl;

    cout << "Popping out last element: " << endl;
    dq.pop_back();
    for(auto i : dq){ cout << i << " "; }
    cout << endl;
    cout << "--------------------" << endl;

    cout << "Erasing elements: " << endl;
    dq.erase(dq.begin());
    dq.erase(dq.begin() + 1);
    dq.erase(dq.end() - 1);
    for(auto i : dq){ cout << i << " "; }
    cout << endl;
    cout << "--------------------" << endl;

    cout << "Duplicating..." << endl;
    deque<int> dupDq(dq);
    for(auto i : dupDq){ cout << i << " "; }
    cout << endl;

    dupDq.push_back(77);
    cout << "--------------------" << endl;
    
    cout << "Swapping after inserting 77: " << endl;
    swap(dq, dupDq);
    cout << "Current dq (Should contain dupDq): " << endl;
    for(auto i : dq){ cout << i << " "; }
    cout << endl;
    cout << "Current dupDq (Should contain dq): " << endl;
    for(auto i : dupDq){ cout << i << " "; }
    cout << endl;
    cout << "--------------------" << endl;

    dq.clear();
    cout << "If you see this, then Ls is gone! RIP!" << endl;
    cout << "--------------------" << endl;
}

int main(){
    explainDeque();
    return 0;
}