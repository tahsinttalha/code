#include <iostream>

using namespace std;

int main() {
    long long n, result = 1;
    cin >> n;

    for (int i = 1; i <= 2; i++)
    {
        result = (result * 5) % 100;
    }

    cout << result << endl;
    return 0;
}