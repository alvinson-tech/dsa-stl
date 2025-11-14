#include <iostream>
using namespace std;

class Solution {
    public:
        int factorial(int n){
            if(n == 0) {
                return 1;
            }

            return n * factorial(n - 1);
        }

};

int main() {
    Solution sol;
    int num;
    cin >> num;
    cout << sol.factorial(num) << endl;
}

/*
n = 5
n = n*(n-1)
n = 5*(4)
5! = 5x4x3x2x1

*/