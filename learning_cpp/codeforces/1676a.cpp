#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string ticket;
        cin >> ticket;
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                sum1 += int(ticket[i]);
            }
            else
            {
                sum2 += int(ticket[i]);
            }
        }

        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}