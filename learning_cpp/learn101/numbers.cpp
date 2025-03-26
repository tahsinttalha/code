#include <iostream>

using namespace std;

int main()
{
    int n = 255; // decimal number
    int m = 0b11111111; // binary number
    int o = 0xff; // hexadecimal number

    unsigned int positive; // contains only positive numbers and avoids negatives;

    cout << "Decimal: " << n << endl;
    cout << "Binary: " << m << endl;
    cout << "Hexadecimal: " << o << endl;
}