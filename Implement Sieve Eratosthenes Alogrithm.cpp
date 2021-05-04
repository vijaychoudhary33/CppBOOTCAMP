#include <iostream>
using namespace std;


void primeSieve(int n)
{
    int prime[600] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 2;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << "\t";
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    primeSieve(n);
    return 0;
}
