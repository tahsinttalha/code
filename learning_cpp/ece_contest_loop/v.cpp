#include <iostream>
#include <vector>

using namespace std;

int main()
{
        long long n;
        cin >> n;

        vector <long long> m;

        m.push_back(n);
        for (int i = 0; n != 1; i++)
        {
            if (n % 2 == 0)
            {
                n /= 2;
                m.push_back(n);
            }
            else
            {
                n *= 3;
                n++;
                m.push_back(n);
            }
        }
        int vsize = size(m);

        for (int i = 0; i < vsize - 1; i++)
        {
            cout << m.at(i) << " ";
        }
        cout << m.at(vsize - 1) << endl;
}   