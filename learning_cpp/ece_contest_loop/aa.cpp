#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n;
    for (int i = n; n != 1;)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n *= 3;
            n++;
        }
        cout << " " << n;
    }
    cout << endl;
}