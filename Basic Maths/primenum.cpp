#include<iostream>
using namespace std;

int isPrime(int n) {
    if(n < 2)
        return 0;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) 
            return 0;
    }

     return 1;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Is a prime number: " << isPrime(num) << endl;
}