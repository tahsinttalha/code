#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, count = 0, last = 0;
        cin >> n;

        vector <int> array (n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            if (array[i] == 0)
            {
                count++;
                if (count > last)
                {
                    last = count;
                }
            }
            else
            {
                count = 0;
            }

        }

        cout << last << endl;
    }
}