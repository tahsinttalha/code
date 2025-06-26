#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, time = 240, time_left, time_req = 0, time_req_prime = 0, prob_solved = 0;
    cin >> n >> k;

    //vector <int> time_for_each;

    time_left = time - k;

    for (int i = 1; i <= n; i++)
    {
        time_req += 5 * i;
        if (time_req <= time_left)
        {
            ++prob_solved;
        }
        else
        {
            break;
        }
    }

    cout << prob_solved << endl;
}