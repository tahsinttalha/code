#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector <long long> welfare (n);
    for (int i = 0; i < n; i++)
    {
        cin >> welfare[i];
    }

    sort(welfare.begin(), welfare.end());

    long long charges = 0;

    for (int i = 0; i < n - 1; i++)
    {
        charges += (welfare[n - 1] - welfare[i]);
    }

    cout << charges << endl;
}