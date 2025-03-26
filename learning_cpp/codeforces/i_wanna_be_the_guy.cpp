#include <iostream>
#include <vector>
#include <algorithm> // includes functions like sort, find

using namespace std;

int main()
{
    int n, p, q;
    vector <int> levels;
    cin >> n >> p;
    vector <int> lvlp (p);
    
    // add the elements of p inside lvlp
    for (int i = 0; i < p; i++)
    {
        cin >> lvlp.at(i);
        levels.push_back(lvlp.at(i));
    }

    cin >> q;
    vector <int> lvlq (q);

    // add the elements of q inside lvlq
    for (int i = 0; i < q; i++)
    {
        cin >> lvlq.at(i);

        // find function finds the desired element inside the vector. 
        if (find(levels.begin(), levels.end(), lvlq.at(i)) == levels.end())
        {
            levels.push_back(lvlq.at(i));
        }
    }

    // sorts the levels vector for convenience
    sort(levels.begin(), levels.end());
    
    // checks if the size is equals to n, otherwise, the levels won't be completed. 
    if (size(levels) != n)
    {
        cout << "Oh, my keyboard!" << endl;
    }
    else
    {    
        for (int i = 0; i < n; i++)
        {
            if (levels[i] != i + 1)
            {
                cout << "Oh, my keyboard!" << endl;
                return 0;
            }
        }
        cout << "I become the guy." << endl;
    }
}
