#include <iostream>

using namespace std;

int main()
{
    long long n, count = 0;
    cin >> n;

    int notes[5] {1, 5, 10, 20, 100};

    for (int i = 4; i >= 0; i--)
    {
        if(n >= notes[i])
        {
            count += n / notes[i];
            n %= notes[i];
        }
    }
    
    cout << count << endl;
}