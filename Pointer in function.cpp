#include<iostream>
using namespace std;
int x;
void q(int z)
{
	z+=x;
	cout<<z<<endl;
}
void p(int *y){
	int x=*y+2;
	q(x);
	*y=x-1;
	cout<<x<<endl;
	
}
int main()
{
	x=5;
	p(&x);
	cout<<x<<endl;
	return 0;
}