#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t != 0)
    {
        int n;
        cin >> n;

        if (n % 3 == 0)
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