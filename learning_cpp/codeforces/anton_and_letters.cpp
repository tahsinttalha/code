#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // take anton's input
    vector <char> alpha, unique;
    string input;
    getline(cin, input);

    int length = input.size();
    
    for (int i = 0; i < length; i++)
    {
        if (isalpha(input[i]) != 0)
        {
            alpha.push_back(input[i]);
        }
    }

    sort(alpha.begin(), alpha.end());
    
    if (alpha.size() == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    
    else
    {
        unique.push_back(alpha[0]);
        
        for (int i = 1; i < alpha.size(); i++)
        {
            if (alpha.at(i) != unique.at(unique.size() - 1))
            {
                unique.push_back(alpha.at(i));
            }
        }

        cout << unique.size() << endl;
    }
}