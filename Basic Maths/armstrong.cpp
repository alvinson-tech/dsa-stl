// Given Number 153, the armstrong number = 1^3 + 5^3 + 3^3 = 153.

#include<iostream>
using namespace std;

bool checkArmstrong(int n) {
    int value = n;
    int count = log10(value) + 1;

    int sum = 0;

    while(value > 0) {
        int rem = value % 10; //153 -> 3 | 5 | 1
        sum += pow(rem, count); //pow(3, 3) + pow(5, 3) + pow (1, 3)
        value = value /10; //153 -> 15 -> 1 -> 0
    }

    if(sum == n)
        return true; 
    return false; 
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Is Armstrong Number: " << checkArmstrong(num) << endl;
}