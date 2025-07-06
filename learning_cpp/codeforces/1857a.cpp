#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, odd_count = 0, even_count = 0, sum_total = 0;
        cin >> n;

        vector <int> arr (n), red, blue;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string output = "YES";

        for (int i = 0; i < n; i++)
        {
            sum_total += arr[i];
        }

        if (sum_total % 2 != 0)
        {
            output = "NO";
        }
        
        cout << output << endl;

    }
}