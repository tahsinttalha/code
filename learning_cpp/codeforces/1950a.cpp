#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    string output[3] = {"STAIR", "PEAK", "NONE"};
    
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c)
        {
            cout << output[0] << endl;
        }
        else if (a < b && b > c)
        {
            cout << output[1] << endl;
        }
        else
        {
            cout << output[2] << endl;
        }
    }
}