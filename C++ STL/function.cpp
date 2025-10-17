#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
#include<numeric>
using namespace std;

void explainSort(){
    int arr[5] = {6, 3, 7, 1, 9};
    sort(arr, arr + 5);
    for(int i = 0; i<5 ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sort(arr + 1, arr + 4);
    // for(int i = 0; i<5 ; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    vector<int> vec = {5,3,6,7,2};
    sort(vec.begin(), vec.end());
    for(auto it : vec) {
        cout << it << " ";
    }
    cout << endl;
}

void explainAccumalate() {
    int arr[5] = {6, 3, 7, 1, 9};
    cout << accumulate(arr, arr + 4, 5);
    cout << endl;
}

void explainCount() {
    int arr[5] = {6, 3, 1, 1, 9};
    cout << count(arr, arr + 5, 3);
    cout << endl;
}

void explainFind() {
    int arr[5] = {6, 3, 1, 1, 9};
    // auto it = find(arr, arr + 5, 1);
    // cout << *it << endl;

    auto it = find(arr, arr + 5, 9);
    if(it == (arr + 5)) {
        cout << "Not Found!";
    }
    else {
        cout << *it << endl;
    }
    cout << endl;
}

void explainNextPermutation() {
    string str = "bac";
    do {
        cout << str << endl;
    } while(next_permutation(str.begin(), str.end()));
}

void explainPrevPermutation() {
    string str = "bac";
    do {
        cout << str << endl;
    } while(prev_permutation(str.begin(), str.end()));
}

void explainMaxElement() {
    int arr[] = {7,6,5,10,9};
    auto it = max_element(arr, arr + 5);
    cout << *it << endl;
    auto it1 = min_element(arr, arr + 5);
    cout << *it1 << endl;
}

void explainReverse() {
    int arr[] = {1,2,3,4,5,};
    reverse(arr, arr + 5);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void explainPower() {
    int n = pow(3,2);
    cout << n << endl;
}

bool internalComparator(pair<int, int> el1, pair<int, int> el2) {
    // if(el1 < el2) return false;
    // return true;

    if(el1.second > el2.second) return true;
    if(el1.second < el2.second) return false;
    if(el1.first < el2.first) return true;
    return false;

}

void explainComparator() {

    //Say, El1 = 2, El2 = 6
    //Internal comparator that takes el1 and el2 and tells you if el1 should be before el2 or not

    // int arr[] = {5, 6, 1, 2};
    // sort(arr, arr + 4, internalComparator);
    // for(int i = 0; i < 4; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    pair<int, int> arr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};
    //Want to sort it according to second element
    //Needed Output: {2, 9}, {3, 9}, {1, 6}, {2, 6}, {1, 5}
    sort(arr, arr + 5, internalComparator);
    for(int i = 0; i < 5; i++) {
        cout << "{" << arr[i].first << "," << arr[i].second << "} ";
    }
}

int main(){
    explainComparator();
    return 0;
}