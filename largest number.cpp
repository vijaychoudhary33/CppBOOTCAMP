// ------------------------ 6.A PROGRAM TO ACCEPT THREE  INTEGER AND DISPLAY LARGEST NUMBER---------------
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,lar;
	cout<<"ENTER A NUMBER:";
	cin>>a;
	cout<<"ENTER B NUMBER:";
	cin>>b;
	cout<<"ENTER C NUMBER:";
	cin>>c;
	
	
	 lar = (a>b)?(a>c?a:c):(b>c?b:c);
	 cout<<"YOUR LARGEST NUMBER FROM A,B AND C IS :"<<lar;
	return 0;
}
