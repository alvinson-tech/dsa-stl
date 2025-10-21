#include<iostream>
using namespace std;

int countDigits(int n) {
    //If it's 0, Then automatically only 1 digit.
    if(n == 0)
        return 1;
    
    int cnt = 0;

    while(n > 0) {
        n = n/10; //Keeps deleting the last number from n.
        cnt++;
    }

    return cnt;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Number of digits: " << countDigits(num) << endl;
}