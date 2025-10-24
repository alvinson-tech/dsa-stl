#include<iostream>
using namespace std;

class Solution {
    public:
        void printNumbers(int n) {
            if(n == 0)
                return;
                
            printNumbers(n - 1);
            cout << n << endl;
        }
};

int main() {
    Solution sol;
    int num = 5;
    sol.printNumbers(num);
}