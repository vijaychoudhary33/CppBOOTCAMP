#include <iostream>
using namespace std;
int main()
{
    int x, y, count;

    cout << "Enter min range: ";
    cin >>x;
    cout << "Enter max range: ";
    cin >> y;

    if (x <= 1)
        x = 1;

    cout << "Prime numbers between "
         << x << " to " << y
         << " are: " << endl;

    for (int i = x; i <= y; i++)
    {
        count = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
            cout << i << " ";
    }

    return 0;
}