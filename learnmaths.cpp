#include<iostream>
using namespace std;

int digits(long n) {
    if(n == 0)
        return 1;
    
    int cnt = 0;

    while(n > 0){
        n = n/10;
        cnt++;
    }

    return cnt;

    // TC => O(log(base10)(num) + 1)
    // SC => O(1)
}

int reverse(int n) {
    int rNum = 0;       

    while(n > 0) {
        int remainder = n%10;
        rNum = (rNum*10) + remainder;
        n = n/10;
    }

    return rNum;
}

int isPalindrome(int n) {
    int reversed = reverse(n);
    if(n == reversed) {
        cout << "It's a Palindrome" << endl;
    }
    else {
        cout << "It's not a Palindrome" << endl;
    }
}

int main() {
    
}