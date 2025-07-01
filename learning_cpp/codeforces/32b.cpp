#include <iostream>
#include <cstring>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string borze_code;
    cin >> borze_code;

    vector <int> nums;

    int len = size(borze_code);

    for (int i = 0; i < len; i++)
    {
        if (borze_code[i] == '.')
        {
            nums.push_back(0);
        }
        else if (borze_code[i] == '-')
        {
            if (borze_code[i + 1] == '.')
            {
                nums.push_back(1);
            }
            else if (borze_code[i + 1] == '-')
            {
                nums.push_back(2);
            }
            i++;
        }
    }

    string notation = to_string(nums[0]);

    for (int i = 1; i < nums.size(); i++)
    {
        notation.append(to_string(nums[i]));
    }

    cout << notation << endl;
}

