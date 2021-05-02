#include<iostream>
using namespace std;
int main()
{
	int a,*p; //p is pointer variable
	cout<<"enter the number a :";
	cin>>a;
	p=&a;
	cout<<"address of a is "<<&a<<p<<endl;
	cout<<"value of a is "<<a<<*p;
	return 0;
	
}
