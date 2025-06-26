#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < 3; i++)
        {
            if(isupper(s[i]))
            {
                continue;
            }
            else
            {
                s[i] = toupper(s[i]);
            }
        }

        if (s == "YES")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}