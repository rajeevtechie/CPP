#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Vector initializatoin:
    vector<int> vec = {5,23,65}; 
    vector<int> vectr(7,1); //(size,value at every position.)
    cout << vec[1] << endl; //23
    cout << vectr[0] << endl; //1
    //for each loop:
    cout << "Printing the first vector:" << endl;
    for(int i: vec){
        cout << i << endl; // here "i" is not the index number but the value at index.
    }

    cout << "Printing the second vector: " << endl;
    for(int val: vectr) {
        cout << val << endl;
    }

    vector<char> alph = {'a','2','b','v'};
    for(char i: alph) {
        cout << i << endl;
    }

    vector<char> alphbt(6,'r'); // 6 "r" 
    for(char val: alphbt){
        cout << val << endl;
    }

    //Vector functions: 
    vector<int> vctr = {1,2,5,6,2,9};
    //1. Size = calculates the size of the vector.
    cout << "size = " << vctr.size() << endl; //6

    //2. push_back = push an element at last of the vector.
    vctr.push_back(10); //adds 10 at the last of the vector.
    vctr.push_back(12); //adds 12 at the last of the vector.
    for(int val: vctr){
        cout << val << endl;
    }

    //3. pop_back = deletes the last element from the vector.
    vctr.pop_back(); //deletes 12 from the vector.
    for(int val: vctr){
        cout << val << endl;
    }

    //4. front: displays the first element.
    cout << vctr.front() << endl; // 1

    //5. back: returns the last value.
    cout << vctr.back() << endl;

    //6. at: gives the value at certain index.
    cout << vctr.at(4) << endl; //2


    //vector size and capacity:
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl; //capacity=4 and size = 3.

    //Single number: print the element that has not appeared twice in an array.
    vector<int> vec1;
    vec1 = {2,4,2,4,6};
    int ans = 0;
    for(int val: vec1){
        ans = ans^val;
    }
    cout << ans << endl; //output = 6
}