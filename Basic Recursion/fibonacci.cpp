#include <iostream>
using namespace std;

class Solution {
    public:
        int fibonacci(int n){
            if(n<2)
                return n;
            else
                return fibonacci(n-1) + fibonacci(n-2);
        }
};

int main() {
    Solution sol;
    int num;
    cin >> num;
    cout << sol.fibonacci(num) << endl;
}

// 0 1 1 2 3 5 8 13
// 0 1 2 3 4 5 6 7