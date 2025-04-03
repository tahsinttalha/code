#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    s[0] = toupper(s[0]);
    for (int i = 1; i < len; i++)
    {
        if (s[i] == 's')
        {
            s[i] = '$';
        }
        else if (s[i] == 'i')
        {
            s[i] = '!';
        }
        else if (s[i] == 'o')
        {
            s[i] = "()";
        }
    }

    cout << s << '.' << endl;
}