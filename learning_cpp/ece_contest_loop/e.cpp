#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t != 0)
    {
        int temp;
        cin >> temp;

        if (temp > 24)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }
}