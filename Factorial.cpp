#include<iostream>
using namespace std;
int main()
{
	int a=1,r,i;
	cin>>r;
	for(i=1;i<=r;i++)
	{
		a=a*i;
	}
	cout<<"factorial of "<<r<<"\n"<<a;
	return 0;
}
