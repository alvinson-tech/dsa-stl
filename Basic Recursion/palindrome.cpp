#include<iostream>
using namespace std;

class Solution {
    public:
        void reverse(int i, int arr[], int n){
            if(i >= n/2) return;

            swap(arr[i], arr[n-i-1]);

            reverse(i+1, arr, n);
        }
};

/*
n = 5
arr = [1,2,3,4,5]
       (0) 1 2 3 (4)
        5 2 3 4 1

        0 (1) 2 (3) 4
        5  4  3  2  1

        0 1 (2) 3 4
        -----------

arr = [1,2,3,4,5,6]
       6,2,3,4,5,1
       6,5,3,4,2,1
           (2)(3)
        6,5,4,3,2,1
              (3)       

sol.reverse(0, arr, n);
*/
int main() {
    int n;
    Solution sol;
    
    cout << "Input the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < n; i++) 
    cin >> arr[i];
    
    sol.reverse(0, arr, n);
    
    cout << "Reversed Array: " << endl;
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;
}