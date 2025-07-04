#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, mishka, chris, m_win = 0, c_win = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> mishka >> chris;
        if (mishka == chris)
        {
            m_win++;
            c_win++;
        }
        else if (mishka > chris)
        {
            m_win++;
        }
        else
        {
            c_win++;
        }
    }

    if (m_win > c_win)
    {
        cout << "Mishka" << endl;
    }
    else if (m_win < c_win)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
}