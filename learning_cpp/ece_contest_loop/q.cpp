#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        double x;
        cin >> x;
        
        x = (x * 20) / 100.0;
        
        x = 100 / x;

        if (x != (int) x)
        {
            x++;
        }

        cout << (int) x << endl;

        t--;
    }
}