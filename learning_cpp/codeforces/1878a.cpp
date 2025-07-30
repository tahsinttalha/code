#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--)
    {

        int n, k;
        cin >> n >> k;
        vector <int> num, occ;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            num.push_back(a);
        }

        int len = num.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len - 1 && i != j; j++)
            {
                
            }
        }
    }
}