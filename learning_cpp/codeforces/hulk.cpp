#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string text = "I hate ";

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            text = text + "that I love ";
        }
        else
        {
            text = text + "that I hate ";
        }
    }
    cout << text << "it" << endl;
}