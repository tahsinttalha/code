/*
    Problem link: https://vjudge.net/problem/CSES-1623/origin
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
    
        <---- Algorithm ---->
        1. Caculate the total sum of the provided numbers
            (Might come in handy to determine the sum of the other combination)
        2. create a "minimum" variable and set it value to the max value
        3. Iterate through the combinaton to set a number to a specific group and calculate the sum.
            (Let's consider we want to add a number to group 1 if the number has 1 in a specific position)
        4. Find the sum of group 2 by subtracting the sum of group 1 from total sum
        5. Find the absolute difference of the numbers
        6. if the difference is smaller than minimum, set difference as its value.
        7. if there are iterations left, go to step 3. 

    */

    int number_of_apples;
    long long total_sum = 0, sum_group1, sum_group2, difference, minimum_diff;
    cin >> number_of_apples;

    vector <long long> weights (number_of_apples);
    for (int i = 0; i < number_of_apples; i++)
    {
        cin >> weights[i];
        total_sum += weights[i];
    }

    minimum_diff = total_sum; // since it cannot be greater than the total sum

    // let's consider the numbers with 1 at specific position are 1. 
    for (int i = 0; i < ((1 << number_of_apples)); i++)
    {
        //making sure these are 0
        sum_group1 = 0;
        sum_group2 = 0;

        for (int j = 0; j < number_of_apples; j++)
        {
            // does the j-th apple which is weights[j] belong to group 1 based on i?

                /*

                    1 << j: This creates a binary number like 0001, 0010, 0100, etc., where only the j-th bit is 1.

                    i & (1 << j): This performs a bitwise AND.

                    If the j-th bit of i is 1, then the result of this AND operation will be (1 << j) (which is a non-zero value).

                    If the j-th bit of i is 0, then the result will be 0.

                    != 0: Checking != 0 explicitly makes it clear that we're looking for a non-zero result, meaning the bit was set. Some languages allow just if (i & (1 << j)) as any non-zero value evaluates to true.

                */
               
            if ((i & (1 << j)) != 0)
            {
                sum_group1 += weights[j];
            }
        }

        sum_group2 = total_sum - sum_group1;
        difference = abs(sum_group1 - sum_group2);

        if (difference < minimum_diff)
        {
            minimum_diff = difference;
        }
    }

    cout << minimum_diff << endl;

}