#include <iostream>

using namespace std;

int main()
{
    int sales = 95000;
    float state_tax = .04, county_tax = .02;
    float to_pay = 95000 - (95000 * state_tax) - (95000 * county_tax);

    cout << to_pay << endl;
}