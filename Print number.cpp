include<iostream>
using namespace std;
int i=0, j=1;
void fun(int *p, int*q) {
    p=q;
    *p=2;
}
int main()
{
    fun(&i,&j);
    cout<<i<<" "<<j;
    return 0;
}
