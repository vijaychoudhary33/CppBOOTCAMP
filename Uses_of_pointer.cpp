#include<iostream>
using namespace std;
int x;
void Q (int z)
{
    z+=x;
    cout<<z<<endl;
}
void P (int *y)
{
    int x=*y+2;
    Q(x);
    *y=x-1;
    cout<<x<<endl;
}
int main()
{
    x=5;
    P(&x);
    cout<<x<<endl;
return 0;
}
