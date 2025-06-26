#include <iostream>

using namespace std;

int main()
{
    int n, store = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            store = i + 1;
            break;
        }
    }

    if (store == 0)
    {
        store = -1;
    }

    cout << store << endl;
}