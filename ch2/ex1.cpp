#include <iostream>
using namespace std;

int main() {
    cout << "\nSize of Fundamental Types\n"
         << "Type                Number of Bytes\n"
         << "--------------------------------------" << endl;
    cout << "size of int:         " << sizeof(int) << endl;
    cout << "size of float:       " << sizeof(float) << endl;
    cout << "size of char:        " << sizeof(char) << endl;
    cout << "size of double:      " << sizeof(double) << endl;
    cout << "size of long:        " << sizeof(short) << endl;
    cout << "size of long double: " << sizeof(long double) << endl;
    cout << "size of short:       " << sizeof(short) << endl;

    return 0; 
}