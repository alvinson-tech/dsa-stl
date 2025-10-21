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

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Reveresed Number: " << reverseNum(num) << endl;
}