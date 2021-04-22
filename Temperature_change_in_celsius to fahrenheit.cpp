//---------------------------------------1.APROGRAM TO CONVERT TEMPERATURE IN CELSIUS TO FAHRENHEIT----------------------------------------
#include<iostream>

using namespace std;
int main()
{
	float fah,cel;
	cout<<"enter the temperature in celsius:";
	cin>>cel;
	fah = (cel*9.0)/5 +32;
	cout<<"the temperature in Celsius:"<<cel<<endl;
	cout<<"the temperature in fahrenheit :"<<fah;
	return 0;
}
