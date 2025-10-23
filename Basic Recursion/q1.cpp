#include<iostream>
using namespace std;

class Solution {
    public:
        void printNumbers(int n) {
            if(n == 0)
                return;
                
            cout << n << endl;
            printNumbers(n - 1);
        }
};

int main() {
    Solution sol;
    int num = 5;
    sol.printNumbers(num);
}