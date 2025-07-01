#include <cmath>
#include <iostream>

using namespace std;

bool is_composite(long long n);

int main() {
    long long n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (is_composite(i) == true)
        {
            int diff = n - i;
            if (is_composite(diff) == true)
            {
                cout << i << endl;
                cout << diff << endl;
                return 0;
            }
        }   
    }
}

bool is_composite(long long n)
{
    long long root = sqrt(n);
    if (root * root == n)
    {
        for (int i = 2; i <= root; i++)
        {
            if (n % i == 0)
            {
                return true;
            }
        }
    }
    else
    {
        for (int i = 2; i <= root; i++)
        {
            if (n % i == 0)
            {
                return true;
            }
        }
    }
    return false;
}