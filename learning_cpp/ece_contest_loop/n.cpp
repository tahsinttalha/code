#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        int n, rated;
        cin >> n >> rated;
        int unrated = (2 * n) - rated;

        if (unrated > rated || unrated == rated)
        {
            rated = 0;
            cout << rated << endl;
        }
        else
        {
            cout << (rated - unrated) << endl;
        }

        t--;
    }
}