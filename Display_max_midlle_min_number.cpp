//------------------11.A PROGRAM TO 3 ACCPET INTEGER AND DISPLAY MAX. AND MIN. AND MIDLLE NUMBER.-------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"ENTER THE FIRST NUMBER :";
	cin>>a;
	cout<<"ENTER THE SECOND NUMBER :";
	cin>>b;
	cout<<"ENTER THE THIRD NUMBER :";
	cin>>c;
	if(b<a&&c>a)
	{
		cout<<"c is maximum number :"<<c;
		cout<<"\na is in middile number :"<<a;
		cout<<"\nb is minimum number : "<<b;
	}
	if(c<a&&b>a)
		{
		cout<<"b is maximum number :"<<b;
		cout<<"\na is in middile number :"<<a;
		cout<<"\nc is minimum number : "<<c;
	}
	if(c<b&&a>b)
	{
		cout<<"\n a is maximum number :"<<a;
		cout<<"\nb is in middile number :"<<b;
		cout<<"\nc is minimum number : "<<c;
	}
	if(a<b&&c>b)
		{
		cout<<"\n c is maximum number :"<<c;
		cout<<"\nb is in middile number :"<<b;
		cout<<"\na is minimum number : "<<a;
	}
	
	if(a<c&&b>c)
	{
		cout<<"\nb is maximum number :"<<b;
		cout<<"\nc is in middile number :"<<c;
		cout<<"\na is minimum number : "<<a;
		
	}
	if(a==b&&b==c)
	{
		cout<<"a,b and c are equal :"<<a;
	}
	
	return 0;
}
