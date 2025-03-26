#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        int x, y;
        cin >> x >> y;
        int amount = x / y;

        if (amount > 20)
        {
            amount = 20;
        }
        cout << amount << endl;

        t--;
    }
}