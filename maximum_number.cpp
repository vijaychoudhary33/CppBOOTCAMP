#include<iostream>
using namespace std;
int main()
{
	int a,i,b=0;
	for(i=1;i<=5;i++)
	{
		cout<<"enter the"<<i<<""<<" number";
		cin>>a;
		if(b<a)
		{
			b=a;
		}
	}
	cout<<"the maximun number is :"<<b;
	return 0;
}
