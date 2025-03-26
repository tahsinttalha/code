#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t)
    {
        int x, y;
        cin >> x >> y;

        y -= x;
        cout << y << endl;

        t--;
    }
}