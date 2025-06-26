#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, amazing_contests = 0;
    cin >> n;

    int first_contest, best = 0, worst = 0;
    cin >> first_contest;

    best = first_contest;
    worst = first_contest;

    for (int i = 1; i < n; i++)
    {
        int contest;
        cin >> contest;
        if (contest > best)
        {
            best = contest;
            ++amazing_contests;
        }
        else if (contest < worst)
        {
            worst = contest;
            ++amazing_contests;
        }
    }

    cout << amazing_contests << endl;
}