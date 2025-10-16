#include<iostream> 
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainUSet(){

    // Similiar to Set, but no ordering (It will print randomly)..

    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(12);

    for(auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    //Why unordered? --> Has better time complexity Best for Search Functionality

    auto it1 = st.find(11); //O(1)
}

int main(){
    explainUSet();
    return 0;
} 