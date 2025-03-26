#include <iostream>

using namespace std;

int main()
{
    float temp;
    cout << "Enter the temperature in Fahrenheit = ";
    cin >> temp;

    float converted = 5 * (temp - 32) / 9;
    cout << converted << endl; 
}