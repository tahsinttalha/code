#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;

        vector <int> bin_string (n);
        for (int i = 0; i < n; i++)
        {
            cin >> bin_string[i];
        }

        while ((bin_string[0] == 0 && bin_string[n - 1] == 1) || (bin_string[0] == 1 && bin_string[n - 1] == 0))
        {
            bin_string.erase(bin_string.begin());
            bin_string.pop_back();
        }

        for (int i = 0; i < bin_string.size(); i++)
        {
            cout << bin_string[i];
        }
        cout << endl;
    }
}