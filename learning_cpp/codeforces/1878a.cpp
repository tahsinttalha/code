    #include <iostream>
    #include <vector>

    using namespace std;

    int main() {
        int t;
        cin >> t;
        
        while (t--)
        {
            int n, k, count = 0;
            cin >> n >> k;

            vector <int> arr (n);
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
                if (k == arr[i])
                {
                    count++;
                }
            }
            
            if (count == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
