//WAP to implement multiple inheritance.
/*Eg: 
Create a base class item that stores the title and price of item. Create another base
class sale that holds sales figure of three months. Use the concept of multiple
inheritance to derive two classes hwitem and switem from both item and sales. Each
class has its own getdata() and displaydata() functions to input and output data
respectively.
*/

#include<iostream>
#include<string>
using namespace std;

class item{
public: 
    string title;
    float price;

};

class sale{
public: 
    float sales[3];
};

class hwitem: public item, public sale{
public: 
    void getdata(){
        cout << "Enter the title of the hardware item: ";
        cin >> title;
        cout << "Enter the price of the item: ";
        cin >> price;
        cout << "Enter the sales figure of three months for the item: ";
        for(int i=0; i<3; i++){
            cin >> sales[i];
        }
    }

    void displaydata(){
        cout << "-------Hardware Item ----------" << endl;
        cout << "Title = " << title << endl;
        cout << "Price = " << price << endl;
        cout << "Sales figure of three months: ";
        for(int i=0; i<3; i++){
            cout << sales[i] << " ";
        }
        cout << endl;
    }
};

class switem: public item, public sale{
public: 
    void getdata(){
        cout << "Enter the title of the software item: ";
        cin >> title;
        cout << "Enter the price of the item: ";
        cin >> price;
        cout << "Enter the sales figure of three months for the item: ";
        for(int i=0; i<3; i++){
            cin >> sales[i];
        }
    }

    void displaydata(){
        cout << "-------Software Item----------" << endl;
        cout << "Title = " << title << endl;
        cout << "Price = " << price << endl;
        cout << "Sales figure of three months: ";
        for(int i=0; i<3; i++){
            cout << sales[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    hwitem item1;
    item1.getdata();
    item1.displaydata();

    switem item2;
    item2.getdata();
    item2.displaydata();
}