#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--)
    {
        long long n, sum_even = 0, sum_odd = 0;
        cin >> n;

        string output = "NO";
        vector <long long> even, odd;

        // we're checking if the sum_even == sum_odd exists
        if ((n / 2) % 2 != 0) // then it doesn't exist
        {
            cout << output << endl;
        }
        else // it does exist
        {
            for (int i = 2; even.size() != n/2; i += 2)
            {
                sum_even += i;
                even.push_back(i);
            }

            for (int i = 1; odd.size() != n/2; i += 2)
            {
                if (odd.size() == (n/2 - 1))
                {
                    if (sum_even - (sum_odd + i) != 0)
                    {
                        continue;
                    }
                    else
                    {
                        odd.push_back(i);
                        break;
                    }
                }
                else
                {
                    sum_odd += i;
                    odd.push_back(i);
                }
            }

            output = "YES";
            cout << output << endl;
            for (int i = 0; i < n/2; i++)
            {
                cout << even[i] << " ";
            }
            for (int i = 0; i < n/2; i++)
            {
                cout << odd[i] << " ";
            }
            cout << endl;
        }
    }
}