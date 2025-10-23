// Time to start with HIS favourtie topic - Recursion!
// The main concept is to give you concept! - Raj :)
// DSA IS ALL ABOUT DSA - Raj Again :)

#include<iostream>
using namespace std;

class Solution {
    public:
        void printName(string name, int count, int N) {
            if(count == N)
                return;
            
            cout << name << endl;

            printName(name, count + 1, N);
        }
};

int main() {
    Solution sol;
    int num;
    string name;

    cout << "Enter the name to be printed: ";
    cin >> name;

    cout << "Enter the number of times: ";
    cin >> num;

    sol.printName(name, 0, num);
}