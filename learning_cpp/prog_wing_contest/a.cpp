#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int smallest;

    vector <int> nums (n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    smallest = 0;

    for (int i = 0; i < n; i++)
    {
        // 0 0 0 1 2 2 3 6
        if (smallest == nums[i])
        {
            smallest++;
        }
    }

    cout << smallest << endl;
}