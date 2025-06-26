#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector <int> numbers;

        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            numbers.push_back(a);
        }

        sort(numbers.begin(), numbers.end());

        if (numbers[2] == numbers[0] + numbers[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}