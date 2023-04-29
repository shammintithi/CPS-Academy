#include <bits/stdc++.h>
using namespace std;

int main(){
    //array initialization
    int a[4];
    //vector initialization
    vector<int> v;

    //push back(variable of index number)
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    v[3] = 15;

    //print out the vector index value
    cout << v[2] << endl;

    //print out the size of the vector
    cout << v.size() << endl;

    //print out all the elements using for loop
    for (int i = 0; i < v.size(); i++) 
    cout << v[i] << " " << endl;
}