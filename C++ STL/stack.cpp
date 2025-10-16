#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainStack(){

    //LIFO

    stack<int> st1;
    st1.push(1);
    st1.push(3);
    st1.push(5);
    st1.push(7);
    st1.emplace(9);

    stack<int> st2;
    st2.push(2);
    st2.push(4);
    st2.push(6);
    st2.push(8);
    st2.push(10);

    cout << st1.size() << endl;
    
    // while(st1.empty() == false){
    //     cout << st1.top() << " ";
    //     st1.pop();
    // }
    // cout << endl;

    swap(st1, st2);
    cout << "ST1: [Should print st2 (Even Numbers)] " << endl;
    while(st1.empty() == false){
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << endl;
    cout << "ST2: [Should print st1 (Odd Numbers)] " << endl;
    while(st2.empty() == false){
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl;
}

int main(){
    explainStack();
    return 0;
} 