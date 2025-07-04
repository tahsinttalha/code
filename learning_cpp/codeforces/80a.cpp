#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, last;
    cin >> n >> m;

    string output = "YES";

    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            output = "NO";
        }
    }

    int mark = 0;

    if (output == "YES")
    {
        for (int i = n + 1; i < m; i++)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    mark = 1;
                    break;
                }
                else
                {
                    mark = 0;
                }
            }

            if (mark == 0)
            {
                output = "NO";
                break;
            }
            else
            {
                output = "YES";
            }
        }
    }

    cout << output << endl;
}