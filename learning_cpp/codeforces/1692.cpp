#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        vector <int> distances (4);
    
        for (int i = 0; i < 4; i++)
        {
            cin >> distances[i];
        }

        int timur = distances[0], count = 0;

        for (int i = 0; i < 4; i++)
        {
            if (distances[i] > timur)
            {
                count++;
            }
            else
            {
                continue;
            }
        }

        cout << count << endl;
    } 
}