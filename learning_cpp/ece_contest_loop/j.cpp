#include <iostream>

using namespace std;

int main()
{
    int t; 
    cin >> t;

    while (t)
    {
        long long s;
        cin >> s;

        s *= 24;
        s *= 1000;

        cout << s << endl;
        t--;
    }
}