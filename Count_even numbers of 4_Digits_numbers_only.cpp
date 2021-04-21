//-------------------------------------17.A program to accept a 4 digits integer only and display the count of even digits.-----------------------------------
#include<iostream>
using namespace std; 
int main()
{
	int a=0,b=0,count_even=0;
	cout<<"enter a 4 digits number :";
	cin>>a;
	if(a>999&&a<10000)
	{
		b=a%10;
		if(b%2==0)
		{
			count_even++;
		}
	
	    a=a/10;
	    b=a%10;
	    if(b%2==0)
		{
			count_even++;
		}
		
		
		a=(a/10);
		b=a%10;
	    if(b%2==0)
		{
			count_even++;
		}
		a=a/10;
		if(a%2==0)
		{
			count_even++;
		}
		
		
	}
	else
	{
		cout<<"entered number is not in  digits";
	}
	cout<<"Number of even digits:"<<count_even;
	
	return 0;
}
		
	
	
