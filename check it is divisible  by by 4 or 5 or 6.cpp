// ------------------------ 4.A PROGRAM TO ACCEPT A INTEGER AND CHECK WHETER  IT IS DIVISIBLE EITHER 4 OR 5 OR 6---------------
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"ENTER A NUMBER:";
	cin>>a;
	
	
	 a%4==0 || a%6==0 ||a%5==0? cout<<"number is divisible by either 4,5,6":cout<<"number is not divisible by either 4,5,6";
	return 0;
}
