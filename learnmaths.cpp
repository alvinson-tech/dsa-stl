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
        int remainder = n%10; //Gives the last digit out.
        rNum = (rNum*10) + remainder; // x10 gives space, and + adding the remainder.
        n = n/10; //Removes the last digit.
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

// int findGCD(int n1, int n2){
//     int i;
//     for(i = min(n1, n2); i >= 1; i--) {
//         if(n1%i==0 && n2%i==0)
//             return i;
//     }
//     return 1;
// }

int findGCD(int n1, int n2){
    while(n1 != 0 && n2 != 0) {
        if(n1>n2) {
            n1 = n1 % n2; // Or n1 - n2;
        }
        else {
            n2 = n2 % n1; // Or n2 - n1;
        }
    }
    if(n1==0) return n2;
    return n1;
}



int main() {
    int a, b;
    cin >> a >> b;
    cout << findGCD(a, b) << endl;
}