#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, m;
    double angle;
    cin >> h >> m;

    h *= 30;
    h += (m * 0.5);
    m *= 6;
    
    angle = h - m;
    angle = abs(angle);

    if (angle > 180)
    {
        angle = 360 - angle;
    }
    cout << angle << endl;
}