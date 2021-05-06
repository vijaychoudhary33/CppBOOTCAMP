//-------------10.a program to accept two integer and an operator(+,-,*,/,%) and display the result ----------------------
#include<iostream>
using namespace std;
int main()
{
    int  a,b;
    char c;
	cout<<"Enter the first number :";
	cin>>a;
	cout<<"Enter the  second number";
	cin>>b;
	cout<<"Enter the  operator";
	cin>>c;
	if(c=='+')
	{
		cout<<" \nsum of a and b are :"<<a+b;
	}
	if(c=='-')
	{
		cout<<"\n substrate of a and b  are :"<<a-b;
		
	}
	if(c=='*')
	{
		cout<<"\n multiole the a and b are :"<<a*b;
	}
	if(c=='/')
	{
		cout<<"\n divide of a and b are : "<<a/b;
	}
	if(c=='%')
	{
		cout<<"\n remender of a and b are :"<<a%b;
	}
	
	
	
	
	
	return 0;
}
