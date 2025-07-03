#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;

        int count0 = 0, count1 = 0, count2 = 0, count3 = 0;
        for (int i = 0; i < n; ++i) {
                
            int modulous = i % 4;

            if (modulous == 0) count0++;
            else if (modulous == 1) count1++;
            else if (modulous == 2) count2++;
            else if (modulous == 3) count3++;
        }
            
        if (count0 != count3 || count1 !=count2)
        {
            cout << "ALICE" << endl;
        }
        else
        {
            cout << "BOB" << endl;
        }
    }
}
