//----------------------------8.PROGRAM TO ACCEPT AN INTEGER AND CHECK WHETER IT IS 3 DIGIT THEN DISPLAY SUM OF DIGITS OTHERWIES PRINT THAT NUMBER-----------------
#include<iostream>
using namespace std;
int main()
{
	int a,b=0,c=0,sum=0;
	cout<<"ENTER THE  NUMBER:";
	cin>>a;
	
	if(a>99&&a<1000)
	{
		b=a%10;
		c=a/10;
		c=c%10;
		a=a/100;
	   
		sum= a+b+c;
		cout<<"sum of 3 digits is :"<<sum;
		
		
	}
	else
   {
   	cout<<"your entered  number is :"<<a;
   }

	
	return 0;
}
