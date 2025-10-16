#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainVector(){

    //Repeated values are considered!
    //Uses 0-indexing, like arrays!
    //Underlying concept is based on dynamic arrays!
    
    vector<int> vec1; //Normal Declaration
    vec1.push_back(1);
    vec1.push_back(3);
    vec1.push_back(5);
    vec1.push_back(7);
    vec1.emplace_back(9);

    vector<int> vec2(5); //Vector with 5 zeros
    vec2.push_back(48);
    vec2.push_back(44);
    vec2.push_back(67);
    vec2.push_back(88);
    vec2.emplace_back(69);

    vector<int> vec3 = {934,412}; //Directly pushing values into vector
    vec3.push_back(100);
    vec3.push_back(100);
    vec3.emplace_back(111);

    //Displays the size of the vector
    cout << "The size of the vectors: " << endl;
    cout << vec1.size() << endl;
    cout << vec2.size() << endl;
    cout << vec3.size() << endl;
    cout << "--------------------" << endl;
    
    // vec1.begin() --> Returns address of the first element.
    // vec1.end() --> Returns address of last element + 1.

    //Displaying the vector values
    //Using Iterators
    cout << "Vec1 using Iterator:" << endl;
    vector<int>::iterator beginItr1 = vec1.begin();
    vector<int>::iterator endItr1 = vec1.end();
    
    for(vector<int>::iterator i = beginItr1; i < endItr1; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    
    //Using Reverse Iterators
    // vec1.rbegin() --> Returns address of the last element
    // vec1.rend() --> Returns address of first element - 1
    cout << "Vec1 using Reverse Iterator:" << endl;
    vector<int>::reverse_iterator revBegin1 = vec1.rbegin();
    vector<int>::reverse_iterator revEnd1 = vec1.rend();
    
    for(vector<int>::reverse_iterator i = revBegin1; i < revEnd1; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "--------------------" << endl;
    
    
    // Replace vector<int>::iterator & vector<int>::reverse_iterator --> auto
    
    // Iterators with auto
    
    cout << "Vec2 using auto (Replacing 'vector<int>::iterator'):" << endl;
    auto beginItr2 = vec2.begin();
    auto endItr2 = vec2.end();
    
    for(auto i = beginItr2; i < endItr2; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    
    //Reverse Iterators with auto
    cout << "Vec2 using Reverse auto (Replacing 'vector<int>::reverse_iterator'):" << endl;
    auto revBegin2 = vec2.rbegin();
    auto revEnd2 = vec2.rend();

    for(auto i = revBegin2; i < revEnd2; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "--------------------" << endl;

    //Recommended way of displaying vectors
    cout << "Vec3 using auto:" << endl;
    for(auto i : vec3){
        cout << i << " ";
    }
    cout << endl;
    cout << "--------------------" << endl;
    
    //Other Commands
    cout << "Other Commands:" << endl;
    cout << "Returns the first and last element in Vec1:" << endl;
    cout << vec1.front() << endl; //Returns first element
    cout << vec1.back() << endl;  //Returns last element
    cout << "--------------------" << endl;
    
    cout << "Inserting elements in Vec1:" << endl;
    vec1.insert(vec1.begin(), 11); //Inserts element in the first place
    vec1.insert(vec1.end(), 99); //Inserts element in the last place (11 1 _ 3 5 7 _ 9 99)
    vec1.insert(vec1.begin() + 2, 22); //Inserts element in the first place 
    vec1.insert(vec1.end() - 2, 88); //Inserts element in the last place (11 1 22 3 5 7 88 9 99)
    for(auto i : vec1){ cout << i << " "; } 
    cout << endl;
    cout << "--------------------" << endl;
    
    cout << "Popping out the last element:" << endl;
    vec1.pop_back(); //Pops out the last element (11 1 22 3 5 7 88 9)
    for(auto i : vec1){ cout << i << " "; } 
    cout << endl;
    cout << "--------------------" << endl;

    cout << "Element at specific index (0 & 3):" << endl;
    cout << vec1[0] << endl; //Returns element at specific index (11)
    cout << vec1.at(3) << endl; //Not used much! (3)
    cout << "--------------------" << endl;

    cout << "Erasing range of elements:" << endl;
    vec1.erase(vec1.begin() + 1, vec1.end() - 1); // (11 9)
    for(auto i : vec1){ cout << i << " "; } 
    cout << endl;
    cout << "--------------------" << endl;

    vec1.clear(); //Removes every element
    cout << "If you see this, then Vec1 is gone! RIP!" << endl;
    cout << "--------------------" << endl;

    //Creating Duplicate Vectors for returning specific range of elements
    vector<int> dupVec(vec2); //Entire vec2 is duplicated into dupVec

    cout << "Duplicating particular range in Vec2: " << endl;
    vector<int> dupVec2(vec2.begin() + 3, vec2.end() - 2); // (0 0 48 44 67)
    for(auto i : dupVec2){ cout << i << " "; } 
    cout << endl;
    cout << "--------------------" << endl;

    //Swapping Vectors
    cout << "Swapping vectors (Vec2 & Vec3): " << endl;
    swap(vec2, vec3);
    cout << "Current Vec2 (Should have Vec3 elements): " << endl;
    for(auto i : vec2){ cout << i << " "; } 
    cout << endl;
    cout << "Current Vec3 (Should have Vec2 elements): " << endl;
    for(auto i : vec3){ cout << i << " "; } 
    cout << endl;
    cout << "--------------------" << endl;
}

int main(){
    explainVector();
    return 0;
}