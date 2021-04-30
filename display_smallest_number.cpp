// ------------------------ 7.A PROGRAM TO ACCEPT THREE  INTEGER AND DISPLAY SMALLEST NUMBER---------------
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sm;
	cout<<"ENTER A NUMBER:";
	cin>>a;
	cout<<"ENTER B NUMBER:";
	cin>>b;
	cout<<"ENTER C NUMBER:";
	cin>>c;
	
	
	 sm= (a<b)?(a<c?a:c):(b<c?b:c);
	 cout<<"YOUR SMALLEST NUMBER FROM A,B AND C IS :"<<sm;
	return 0;
}
