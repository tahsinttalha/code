#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, prog = 0, maths = 0, pe = 0;
    cin >> n;

    vector <int> skill (n), pmpe (3);
    for (int i = 0; i < n; i++)
    {
        cin >> skill[i];

        if (skill[i] == 1)
        {
            prog++;
        }
        else if (skill[i] == 2)
        {
            maths++;
        }
        else if (skill[i] == 3)
        {
            pe++;
        }
    }

    int max_teams = min(prog, maths, pe);

    cout << max_teams << endl;
    vector <int> pro, math, pub;

    for (int j = 0; j < n; j++)
    {
        if (skill[j] == 1)
        {
            pro.push_back(j + 1);
        }
        else if (skill[j] == 2)
        {
            math.push_back(j + 1);
        }
        else
        {
            pub.push_back(j + 1);
        }
    }

    for (int i = 0; i < max_teams; i++)
    {
        cout << pro[i] << endl;
        cout << math[i] << endl;
        cout << pub[i] << endl;
    }
}