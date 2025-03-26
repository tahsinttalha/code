#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        int h = 0;
        vector <char> over (8);
        for (int i = 0; i < 6; i++)
        {
            cin >> over.at(i);
        }

        for (int i = 0; i < 6; i++)
        {
            if (over.at(i) == 'W')
            {
                if (over.at(i + 1) == 'W' && over.at(i + 2) == 'W')
                {
                    h = 1;
                }
            }
        }

        if (h == 1)
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