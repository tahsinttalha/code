#include <bits/stdc++.h>

using namespace std;

int mex(const vector <int> &n);

int main() 
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, mex, target = -1;
        string output = "YES", output_n = "NO";
        cin >> n;
        
        vector <int> num (n);
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if (num[i] == 0)
            {
                output = output_n;
                break;
            }

            if (target == -1 && target != num[i])
            {
                target = num[i];
            }
            else if (target != num[i] && num[i] != -1)
            {
                output = output_n;
            }
        }

        cout << output << endl;
    }
}

