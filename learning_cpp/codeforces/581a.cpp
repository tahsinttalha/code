#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> socks (2);
    for (int i = 0; i < 2; i++)
    {
        cin >> socks[i];
    }
    sort(socks.begin(), socks.end());

    cout << socks[0] << endl;
    
    socks[1] -= socks[0];
    socks[1] /= 2;
    
    cout << socks[1] << endl;

    return 0;
}