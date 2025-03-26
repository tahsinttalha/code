#include <iostream>

using namespace std;

int main()
{
    int t, age;
    cin >> t;

    while(t)
    {
        cin >> age;
        age -= 10;
        cout << age << endl;

        t--;
    }
}