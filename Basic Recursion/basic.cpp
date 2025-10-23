// Time to start with HIS favourtie topic - Recursion!
// The main concept is to give you concept! - Raj :)
// DSA IS ALL ABOUT DSA - Raj Again :)

#include<iostream>
using namespace std;
int cnt = 0;

void printName() {
    if(cnt == 5)
        return;
    
    cnt++;
    cout << "Alvin is Great! 😎" << endl;
    printName();
}

int main() {
    printName();
}