#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> calorie (4);
    for (int i = 0; i < 4; i++)
    {
        cin >> calorie[i];
    }

    string index;
    cin >> index;
    int len = index.size();
    long long cost = 0;

    for (int i = 0; i < len; i++)
    {
        int indices = int(index[i]) - 48 - 1;
        cost += calorie[indices];
    }

    cout << cost << endl;
}