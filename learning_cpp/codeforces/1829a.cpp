#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        string input, comp = "codeforces";
        cin >> input;

        int indices = 0;

        for (int i = 0; i < 10; i++)
        {
            if (input[i] != comp[i])
            {
                indices++;
            }
        }

        cout << indices << endl;
    }
}