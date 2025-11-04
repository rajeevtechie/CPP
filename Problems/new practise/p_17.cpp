#include <iostream>
using namespace std;

class number {
public:
    int value;

    number(int num = 0) {
        value = num;
    }

    // Prefix increment (++n)
    number operator++() {
        ++value;
        return *this;
    }

    // Postfix increment (n++)
    number operator++(int) {
        number temp = *this;
        value++;
        return temp;
    }

    // Binary addition (n1 + n2)
    number operator+(const number &obj) {
        return number(value + obj.value);
    }

    // Binary comparison (n1 < n2)
    bool operator<(const number &obj) {
        return value < obj.value;
    }

    // Overload << for output
    friend ostream& operator<<(ostream &out, const number &obj) {
        out << obj.value;
        return out;
    }
};

int main() {
    number n1(5);
    number n2(6);

    cout << "Prefix (++n1): " << ++n1 << endl;
    cout << "Postfix (n2++): " << n2++ << endl;
    cout << "After Postfix, n2: " << n2 << endl;
    cout << "Sum (n1 + n2): " << (n1 + n2) << endl;

    if (n1 < n2)
        cout << "n1 is smaller than n2" << endl;
    else
        cout << "n1 is not smaller than n2" << endl;

    return 0;
}
