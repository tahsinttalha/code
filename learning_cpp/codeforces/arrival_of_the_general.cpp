#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, count = 0;
    cin >> n;

    vector <int> numbers;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        numbers.push_back(a);
    }

    auto min = min_element(numbers.begin(), numbers.end());

    for (int i = n - 1; i >= 0; i--)
    {
        if (*min == numbers[i])
        {
            numbers.push_back(numbers.at(i));
            numbers.erase(numbers.begin() + i);
            count += n - 1 - i;
            break;
        }
    }

    auto max = max_element(numbers.begin(), numbers.end());

    for (int i = 0; i < n; i++)
    {
        if (*max == numbers.at(i))
        {
            count += i;
            break;
        }
    }

    cout << count << endl;
}