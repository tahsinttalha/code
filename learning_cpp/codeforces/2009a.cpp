#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int a, b, c;
        cin >> a >> b;

        c = a;
        int min_ac = (c - a) + (b - c);
        c = b;
        int min_bc = (c - a) + (b - c);

        if (min_bc > min_ac)
        {
            cout << min_ac << endl;
        }
        else
        {
            cout << min_bc << endl;
        }
    }
}