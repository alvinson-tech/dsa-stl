#include<iostream>
#include<list>
#include<set>
#include<unordered_set>
using namespace std;

void explainPair(){

    //Basic Declaration of Pair
    pair <int, int> pr1 = {12, 23};
    pair <string, char> pr2 = make_pair("hello", 'a');
    pair <float, double> pr4 = make_pair(28.23, 47.8891);
    cout << pr1.first << " " << pr1.second << endl;
    cout << pr2.first << " " << pr2.second << endl;
    cout << pr4.first << " " << pr4.second << endl;

    //Nested Pair
    pair <pair <int , int> , int> pr3 = {{15, 06}, 04};
    cout << pr3.first.first << " " << pr3.first.second << " " << pr3.second << endl;
}

int main(){
    explainPair();
    return 0;
}