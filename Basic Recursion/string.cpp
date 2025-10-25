#include<iostream>
using namespace std;

class Solution {
    public:
        bool palindrome(int i, string &s, int n) {
            if(i >= n/2) return true;

            if(s[i] != s[n-i-1]) return false;

            return palindrome(i + 1, s, n);
        }
};

int main() {
    string s = "malayalam";
    string s1 = "madsm";
    int n = s.size();
    Solution sol;
    cout << sol.palindrome(0, s, n) << endl;
    cout << sol.palindrome(0, s1, n) << endl;
}