#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
double div(int a,int b)
{
	double c;
	c=a/b;
	return c;
}
int main()
{
	int a,b;
	cout<<"enter the first number :";
	cin>>a;
	cout<<"enter the second number :";
	cin>>b;
	cout<<"addition of two numbers is "<<add(a,b)<<endl;
	cout<<"subtraction of two numbers is "<<sub(a,b)<<endl;
	cout<<"multiplication two numbers is "<<mul(a,b)<<endl;
	cout<<"division of two numbers is "<<div(a,b)<<endl;
	return 0;
}

