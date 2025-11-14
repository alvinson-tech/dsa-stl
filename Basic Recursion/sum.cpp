//Sum of 1st N Natural Numbers

#include<iostream>
using namespace std;

class Solution {
    public:
        int numbersSum(int n) {
            if(n == 0)
                return 0;

            return n + numbersSum(n - 1);
        }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << sol.numbersSum(num) << endl;
}