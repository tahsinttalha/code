#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(9);

    double pi = 3.141592653, area;

    double radius;
    cin >> radius;

    area = pi * pow(radius, 2);
    cout << area << endl;
}