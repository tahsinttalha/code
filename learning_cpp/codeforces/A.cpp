#include <iostream>

using namespace std;

int main()
{
    int shoes[4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> shoes[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 && j != i; j++)
        {
            if (shoes[i] == shoes[j] && shoes[i] != 0 && shoes[j] != 0)
            {
                count++;
                shoes[j] = 0;
            }
        }

        if (count > 3)
        {
            break;
        }
    }

    cout << count << endl;
}