#include <iostream>
#include <list>
#include <iterator> // for std::next and std::prev
using namespace std;

int main() {
    list<int> ls = {10, 20, 30, 40};

    // insert 25 after the first element
    auto it = next(ls.begin());  // points to 20
    ls.insert(it, 15);           // insert BEFORE 20

    // insert 35 before the last element
    auto it2 = prev(ls.end());   // points to 40
    ls.insert(it2, 35);

    for (int x : ls)
        cout << x << " ";
}
