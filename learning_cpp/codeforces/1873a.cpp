#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        vector <char> letters (3);
        for (int i = 0; i < 3; i++)
        {
            cin >> letters[i];
        }

        string output;

        if (letters[0] == 'a' || letters[1] == 'b' || letters[2] == 'c')
        {
            output = "YES";
        }
        else
        {
            output = "NO";
        }

        cout << output << endl;
        
    }
}