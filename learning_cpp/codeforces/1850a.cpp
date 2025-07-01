#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        vector <int> digits (3);
        for (int i = 0; i < 3; i++)
        {
            cin >> digits[i];
        }

        if (digits[0] + digits[1] >= 10 || digits[0] + digits[2] >= 10 || digits[1] + digits[2] >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}