#include<iostream>
using namespace std;

int reverseNum(int n) {
    int rNum = 0;

    while(n > 0) {
        int rem = n % 10; //Store last digit in rem.
        rNum = (rNum * 10) + rem; //Adding a zero at the end by (* 10) to add the upcoming remainder.
        n = n / 10; //Erases the last digit.
    }

    return rNum;
}

bool checkPalindrome(int n) {
    int revNum = reverseNum(n);

    if(n == revNum)
        return 1;
    return 0;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The number is a palindrome: " << checkPalindrome(num) << endl; //1 -> True, 0 -> False
}