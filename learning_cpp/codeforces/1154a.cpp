#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    long long a, b, c;
    vector <long long> inputs (4);
    for (int i = 0; i < 4; i++)
    {
        cin >> inputs[i];
    }
    sort (inputs.begin(), inputs.end());

    if (inputs[0] == inputs[1] && inputs[1] == inputs[2])
    {
        long long n = inputs[0] / 2;
        a = n; b = n; c = n;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    else
    {
        a = inputs[3] - inputs[0];
        b = inputs[3] - inputs[1];
        c = inputs[3] - inputs[2];

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }

    return 0;
}