#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_form (int a, int b, int c)
{
    a *= 10;
    a += b;
    a *= 10;
    a += c;

    return a;
}

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        vector <int> alice(3), bob(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> alice.at(i);
        }

        for (int i = 0; i < 3; i++)
        {
            cin >> bob.at(i);
        }

        sort (alice.begin(), alice.end());
        sort (bob.begin(), bob.end());

        int a = num_form(alice.at(2), alice.at(1), alice.at(0));
        int b = num_form(bob.at(2), bob.at(1), bob.at(0));
        
        if (a > b)
        {
            cout << "Alice" << endl;
        }
        else if (a < b)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }


        t--;
    }
}   