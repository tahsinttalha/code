#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, odd_count_array = 0, odd_count_index = 0, even_count_array = 0, even_count_index = 0, swap_2x = 0;
        cin >> n;

        vector <int> array (n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];

            if (array[i] % 2 != i % 2)
            {
                swap_2x++;
                if (array[i])
            }
        }

        if (swap_2x % 2 == 0)
        {
            cout << swap_2x / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}