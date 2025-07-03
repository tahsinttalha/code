#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        string input;
        cin >> input;

        int len = input.size();

        for (int i = 1, j = 2; i < len && j < len; i+= 2, j+= 2)
        {
            if (input[i] == input[j])
            {
                input.erase(input.begin() + i);
                len--;
                i--;
                j--;
            }
        }

        cout << input << endl;
    }
}