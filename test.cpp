#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    for (int i = 0; i < 10; ++i) {
        x += i;
        cout << x << endl;
    }

    return 0;
}