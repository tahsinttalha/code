#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // take anton's input
    vector <char> alpha;
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
    for (int i = 0; i < alpha.size(); i++)
    {
        cout << alpha.at(i) << " ";
    }
    cout << endl;

    for (int i = 0; ; i++)
    {
        if (alpha[i + 1] == 0)
        {
            break;
        }
        
        else 
        {   
            if (alpha[i] == alpha[i + 1])
            {
                alpha.erase(alpha.begin() + i + 1);
            }
        }
    }

    for (int i = 0; i < alpha.size(); i++)
    {
        cout << alpha.at(i) << endl;
    }

    cout << alpha.size() << endl;
}