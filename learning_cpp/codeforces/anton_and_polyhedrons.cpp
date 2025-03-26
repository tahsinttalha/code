#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    while (n)
    {
        string poly;
        cin >> poly;

        if (poly == "Tetrahedron")
        {
            count += 4;
        }
        else if (poly == "Cube")
        {
            count += 6;
        }
        else if (poly == "Octahedron")
        {
            count += 8;
        }
        else if (poly == "Dodecahedron")
        {
            count += 12;
        }
        else if (poly == "Icosahedron")
        {
            count += 20;
        }

        n--;
    }
    
    cout << count << endl;
}