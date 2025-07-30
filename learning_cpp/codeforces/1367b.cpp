#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, odd_index = 0, odd_value = 0, even_index = 0, even_value = 0;
        cin >> n;
        vector <int> arr (n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (i % 2 != arr[i] % 2)
            {
                if (i % 2 == 0)
                    odd_index++;
                else
                    even_index++;
                
                if (arr[i] % 2 == 0)
                    odd_value++;
                else
                    even_value++;
            }
        }

        if (odd_index == even_index)
        {
            cout << odd_index << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}