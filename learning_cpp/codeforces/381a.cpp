#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, sereja = 0, dima = 0, count = 0;
    cin >> n;
    vector <int> cards (n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    // for (int i = 0; i < n; )
    // {
    //     if (i % 2 == 0)
    //     {
    //         int maximum = max(cards[i], cards[(n - 1) - i]);
    //         sereja += maximum;
            
    //         if (maximum = cards[(n - 1) - i])
    //         {
    //             cards.pop_back();
    //             n--;
    //         }
    //         else
    //         {
    //             cards.erase(cards.begin() + i);
    //             i++;
    //         }
    //     }
    //     else
    //     {
    //         int maximum = max(cards[i], cards[(n - 1) - i]);
    //         dima += maximum;
            
    //         if (maximum = cards[(n - 1) - i])
    //         {
    //             cards.pop_back();
    //             n--;
    //         }
    //         else
    //         {
    //             cards.erase(cards.begin() + i);
    //             i++;
    //         }
    //     }
    // }

    while (n)
    {
        if (count % 2 == 0)
        {
            int maximum = max(cards[0], cards[n - 1]);
            sereja += maximum;

            if (maximum == cards[n - 1])
            {
                cards.pop_back();
            }
            else
            {
                cards.erase(cards.begin());
            }
        }

        else
        {
            int maximum = max(cards[0], cards[n - 1]);
            dima += maximum;

            if (maximum == cards[n - 1])
            {
                cards.pop_back();
            }
            else
            {
                cards.erase(cards.begin());
            }
        }

        count++;
        n--;
    }

    cout << sereja << endl;
    cout << dima << endl;

    return 0;
}