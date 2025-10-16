#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainQueue(){

    //FIFO

    queue<int> q1;
    q1.push(22);
    q1.push(24);
    q1.push(26);
    q1.emplace(28);

    queue<int> q2;
    q2.push(11);
    q2.push(13);
    q2.push(15);
    q2.emplace(17);

    cout << q1.size() << endl;

    // while(q1.empty() == false){
    //     cout << q1.front() << " ";
    //     q1.pop();
    // }
    // cout << endl;

    swap(q1, q2);
    cout << "Q1: [Should output Q2] " << endl;
    while(q1.empty() == false){
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    cout << "Q2: [Should output Q1] " << endl;
    while(q2.empty() == false){
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;
}

void explainPQueue(){
    
    //Stores the highest element at the top
    //Heap is implemented

    priority_queue<int> pq1;
    pq1.push(5);
    pq1.push(10);
    pq1.push(3);
    pq1.emplace(7);

    priority_queue<int> pq2;
    pq2.push(7);
    pq2.push(15);
    pq2.push(2);
    pq2.emplace(6);

    //Stores the smallest element at the top (Min Heap)
    priority_queue<int, vector<int>, greater<int>> pq3;
    pq3.push(7);
    pq3.push(15);
    pq3.push(2);
    pq3.emplace(6);

    while(pq3.empty() == false){
        cout << pq3.top() << " ";
        pq3.pop(); 
    }
    cout << endl;

    // swap(pq1, pq2);
    // cout << "PQ1: [Should output PQ2] " << endl;
    // while(pq1.empty() == false){
    //     cout << pq1.top() << " ";
    //     pq1.pop();
    // }
    // cout << endl;
    // cout << "PQ2: [Should output PQ1] " << endl;
    // while(pq2.empty() == false){
    //     cout << pq2.top() << " ";
    //     pq2.pop();
    // }
    // cout << endl;
}

int main(){
    explainPQueue();
    return 0;
}