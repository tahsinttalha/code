#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    int denominator = 6, highest = max(y, w), numerator = 1 + (denominator - highest), gcd = 1;

    int num = numerator, den = denominator;
    
    // while (true)
    // {
    //     if (num > den)
    //     {
    //         num %= den;
    //     }
    //     else
    //     {
    //         den %= num;
    //     }

    //     if (num == 0)
    //     {
    //         gcd = den;
    //         break;
    //     }
    //     else if (den == 0)
    //     {
    //         gcd = num;
    //         break;
    //     }
    //     else
    //     {
    //         continue;
    //     }
    // }

    // Euclidian algorithm to find the greatest common divisor
    while (den != 0)
    {
        int temp = den;
        den = num % den;
        num = temp;
    }

    gcd = num;
    numerator /= gcd;
    denominator /= gcd;

    cout << numerator << "/" << denominator << endl;
}