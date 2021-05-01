//----------------------------------2.A PROGRAM TO ACCEPET A INTEGER AND CHECK WETHIER IT IS A 3 DIGITS ODD INTEGER-------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a number : ";
	cin>>a;
	if(a>=100&&a<1000)
	{ 
	  if(a%2!=0)
	  {
	  	cout<<"your number is 3 digits odd integer. ";
	  }	
	  else
	  {
	  	cout<<"your number is 3 digits  not odd integer.";
	  }

	}
		  else
	  {
	  	cout<<"your number is not come in 3 digits.";
	  }
	  return 0;
}
