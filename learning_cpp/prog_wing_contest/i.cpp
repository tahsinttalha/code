#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n, x, sum, index1 = 0, index2 = 0;
    cin >> n >> x;

    vector <long long> array (n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // sort(array.begin(), array.end());

    // if (x > array[n - 1])
    // {
        
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
        
    //     // for (int j = 0; j < n && j != i; j++)
    //     // {
    //     //     sum = array[i] + array[j];
    //     //     if (sum == x)
    //     //     {
    //     //         index1 = i + 1;
    //     //         index2 = j + 1;
    //     //         cout << index2 << endl << index1 << endl;
    //     //         return 0;
    //     //     }
    //     // }
    // }

    cout << "IMPOSSIBLE" << endl;
}

// 1 2 5 7 = 8
// 1 2 4 6 = 10
// 1 2 4 6 8 = 10
// 5 7 9 10 = 8