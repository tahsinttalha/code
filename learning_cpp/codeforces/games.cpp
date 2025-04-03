#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    vector <vector <int>> teams;
    
    for (int i = 0; i < n; i++)
    {
        vector <int> colours (2);
        for (int j = 0; j < 1; j++)
        {
            cin >> colours.at(0);
            cin >> colours.at(1);
        }
        teams.push_back(colours);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (teams[j][0] == teams[i][1])
            {
                count ++;
            }
        }
    }

    cout << count << endl;

}