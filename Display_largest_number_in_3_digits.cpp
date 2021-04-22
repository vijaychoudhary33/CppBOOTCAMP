//---------------------------6.A PROGRAM TO ACCEPT 3 INTEGER AND DISPLAY LARGEST INTEGER.------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"ENTER A NUMBER:";
	cin>>a;
	cout<<"ENTER B NUMBER:";
	cin>>b;
	cout<<"ENTER C NUMBER:";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"A number is largest number :"<<a;
		}
		else
		{
			cout<<"C number is largest number :"<<c;
		}
		
	}
	else
	{
		if(b>c)
		{
			cout<<"B number is lardest number :"<<b;
		}
		else
		{
			cout<<"C number is largest number :"<<c;
		}
	}
	return 0;
}
