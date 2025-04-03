#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0, over = 0;
        string s;
        cin >> s;

        int len = s.length();

        for (int i = 0; i < len; i++)
        {
            if (s[i] != 'W' || s[i] != 'N' || s[i] != 'D')
            {
                count++;
            }
        }

        if (count < 6)
        {
            over = 0;
        }
        else if (count % 6 != 0 && count > 6)
        {
            over /= 6;
            count -= (over * 6);
        }
        else
        {
            count /= 6;
        }

        if (over < 1)
        {
            if (count < 2)
            {
                cout << count << " BALL" << endl;
            }
            else
            {
                cout << count << " BALLS" << endl;
            }
        }
        else
        {
            if (over > 2)
            {
                cout << over << " OVERS" << endl;
                if (count == 0)
                {
                    return 0;
                }
                else if(count < 2 && count != 0)
                {
                    cout << count << " BALL" << endl;
                }
                else
                {
                    cout << count << " BALLS" << endl;
                }
            }
            else
            {
                cout << over << " OVER" << endl;
                if (count == 0)
                {
                    return 0;
                }
                else if(count < 2 && count != 0)
                {
                    cout << count << " BALL" << endl;
                }
                else
                {
                    cout << count << " BALLS" << endl;
                }
            }
        }

        count = 0;
        over = 0;
    }
}