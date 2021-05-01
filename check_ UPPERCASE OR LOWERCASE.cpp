//-------------------------------------9.PROGRAM A CHARACTER AND CHECK WETHER IT IS AN UPPERCASE OR LOWERCASE.-------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"ENTER THE CHARACTER :";
	cin>>a;
	if(a>=65&&a<=90)
	{
		cout<<"your entered character is uppercase";
		
	}
	else
	{
		if(a>=97&&a<=122)
		{
			cout<<"your entered character in lower case";
		}
	}
	return 0;
}
