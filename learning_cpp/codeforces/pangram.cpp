#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int n, count = 0;
    string input;
    
    cin >> n >> input;
    int alpha[26] {};

    if (n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            input[i] = toupper(input[i]);
            alpha[input[i] - 65]++;              
        }

        for (int i = 0; i < 26; i++)
        {
            if (alpha[i] == 0)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
}