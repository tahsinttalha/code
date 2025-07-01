#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        char c;
        cin >> c;

        string code = "codeforces", output = "NO";

        for (int i = 0; i < code.size(); i++)
        {
            if (code[i] == c)
            {
                output = "YES";
                break;
            }
        }

        cout << output << endl;
    }
}