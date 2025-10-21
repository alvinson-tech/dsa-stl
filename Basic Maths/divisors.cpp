#include<iostream>
using namespace std;

vector<int> printDivisors(int n) {
    vector<int> v;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            v.push_back(i);
        }
    }

    return v;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for(auto i : printDivisors(num)) {
        cout << i << " ";
    }
    cout << endl;
}